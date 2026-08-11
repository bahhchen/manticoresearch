# Offline / no-database build preset for the search-service deployment of Manticore.
#
# Two things are enforced here:
#   1. searchd never talks to a business database - the only writer of the RT tables is
#      search-service. Hence no libpq / libmysqlclient / unixODBC / expat data sources at all.
#   2. the build must not reach the network - everything that would download or vcpkg-install
#      something (OpenSSL, galera, googletest/googlebench) is off.
#
# Set MANTICORE_OFFLINE=OFF to get the stock upstream behaviour back.

if (__offline_preset_included)
	return ()
endif ()
set ( __offline_preset_included YES )

option ( MANTICORE_OFFLINE "Fully offline build without any database client dependency" ON )

if (NOT MANTICORE_OFFLINE)
	message ( STATUS "MANTICORE_OFFLINE is off - upstream dependency handling is in effect" )
	return ()
endif ()

include ( local_deps ) # defines MANTICORE_DEPS_DIR and the resolve/stage helpers

macro ( _offline_force NAME VALUE REASON )
	set ( ${NAME} ${VALUE} CACHE BOOL "${REASON}" FORCE )
endmacro ()

# --- database clients: forbidden by design (search-service owns all DB access) ---
_offline_force ( WITH_POSTGRESQL 0 "offline: no direct DB access from searchd" )
_offline_force ( WITH_MYSQL 0 "offline: no direct DB access from searchd" )
_offline_force ( WITH_ODBC 0 "offline: no direct DB access from searchd" )
_offline_force ( WITH_EXPAT 0 "offline: xmlpipe2 source unused" )
_offline_force ( WITH_ICONV 0 "offline: goes together with expat" )

# --- everything that would download or vcpkg-install during configure ---
_offline_force ( WITH_SSL 0 "offline: searchd listens on localhost only" )
_offline_force ( WITH_CURL 0 "offline: unused" )
_offline_force ( WITH_ZSTD 0 "offline: mysql protocol zstd compression unused" )
_offline_force ( WITH_GALERA 0 "offline: no cluster replication" )
_offline_force ( BUILD_TESTING 0 "offline: no googletest/googlebench download" )

# --- indexer: not part of the product ---
# All index building goes through search-service (batch read from the business DB -> HTTP bulk
# insert into a Manticore RT table). Plain tables built offline by indexer are not used, and with
# the db sources compiled out indexer could only read tsv/csv pipes anyway.
# Pass -DWITH_INDEXER=1 explicitly if it is needed for a one-off migration.
if (NOT DEFINED WITH_INDEXER)
	set ( WITH_INDEXER 0 CACHE BOOL "build and install the indexer tool" )
endif ()

# --- kept: built from ${MANTICORE_DEPS_DIR} ---
if (NOT DEFINED WITH_ICU)
	set ( WITH_ICU 1 CACHE BOOL "ICU - required for Chinese segmentation" )
endif ()
if (NOT DEFINED WITH_RE2)
	set ( WITH_RE2 1 CACHE BOOL "RE2 - regexp_filter" )
endif ()
if (NOT DEFINED WITH_STEMMER)
	set ( WITH_STEMMER 1 CACHE BOOL "Snowball stemmer" )
endif ()
if (NOT DEFINED WITH_JIEBA)
	set ( WITH_JIEBA 1 CACHE BOOL "cppjieba - Chinese segmentation with user dictionary" )
endif ()
if (NOT DEFINED WITH_ZLIB)
	set ( WITH_ZLIB 1 CACHE BOOL "zlib - HTTP gzip" )
endif ()

message ( STATUS "MANTICORE_OFFLINE: db clients off (pgsql/mysql/odbc), ssl/curl/zstd/galera/testing off, deps taken from ${MANTICORE_DEPS_DIR}" )
