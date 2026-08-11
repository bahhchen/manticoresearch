cmake_minimum_required ( VERSION 3.17 FATAL_ERROR )

# Offline build: sources come from ${MANTICORE_DEPS_DIR}/cctz, nothing is downloaded.
# Upstream origin (kept for version upgrades): https://github.com/manticoresoftware/cctz, commit 8ca8e32

include ( local_deps )

# try to find quietly (will work most time
find_package ( cctz QUIET CONFIG )
return_if_target_found ( cctz::cctz "found ready (no need to build)" )

# not found. Take local sources, staged aside so that the deps folder stays pristine
resolve_local_src ( cctz CCTZ_ORIG )
stage_local_src ( cctz "${CCTZ_ORIG}" CCTZ_SRC )

# build external project
get_build ( CCTZ_BUILD cctz )
reset_stale_external_build ( cctz "${CCTZ_BUILD}" )
external_build ( cctz CCTZ_SRC CCTZ_BUILD CCTZ_BUILD_TOOLS=0 CCTZ_BUILD_EXAMPLES=0 CCTZ_BUILD_BENCHMARK=0 CCTZ_BUILD_TESTING=0 )

# now it should find
find_package ( cctz REQUIRED CONFIG )
return_if_target_found ( cctz::cctz "was built and saved" )
