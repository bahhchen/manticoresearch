cmake_minimum_required ( VERSION 3.17 FATAL_ERROR )

# Offline build: sources come from ${MANTICORE_DEPS_DIR}/xxHash, nothing is downloaded.
# Upstream origin (kept for version upgrades): https://github.com/manticoresoftware/xxHash, commit 72997b0

include ( local_deps )

# determine destination folder where we expect pre-built xxhash
find_package ( xxHash QUIET CONFIG )
return_if_target_found ( xxHash::xxhash "found ready (no need to build)" )

# not found. Take local sources, staged aside so that the deps folder stays pristine
resolve_local_src ( xxhash XXH_ORIG )
stage_local_src ( xxhash "${XXH_ORIG}" XXH_SRC )

# build external project
get_build ( XXH_BUILD xxhash )
reset_stale_external_build ( xxhash "${XXH_BUILD}" )
external_build ( xxhash XXH_SRC XXH_BUILD BUILD_SHARED_LIBS=0 XXHASH_BUILD_XXHSUM=0 )

# now it should find
find_package ( xxHash REQUIRED CONFIG )
return_if_target_found ( xxHash::xxhash "was built and saved" )
