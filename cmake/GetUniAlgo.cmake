cmake_minimum_required ( VERSION 3.17 FATAL_ERROR )

# Offline build: sources come from ${MANTICORE_DEPS_DIR}/uni-algo, nothing is downloaded.
# Upstream origin (kept for version upgrades): https://github.com/manticoresoftware/uni-algo, tag v0.7.2

include ( local_deps )

# determine destination folder where we expect pre-built uni-algo
find_package ( uni-algo QUIET CONFIG )
return_if_target_found ( uni-algo::uni-algo "found ready (no need to build)" )

# not found. Take local sources, staged aside so that the deps folder stays pristine
resolve_local_src ( uni-algo UNIALGO_ORIG )
stage_local_src ( uni-algo "${UNIALGO_ORIG}" UNIALGO_SRC )

# build external project
get_build ( UNIALGO_BUILD uni-algo )
reset_stale_external_build ( uni-algo "${UNIALGO_BUILD}" )
external_build ( uni-algo UNIALGO_SRC UNIALGO_BUILD UNI_ALGO_DISABLE_PROP=1 UNI_ALGO_DISABLE_BREAK_WORD=1 UNI_ALGO_DISABLE_COLLATE=1 UNI_ALGO_DISABLE_NFKC_NFKD=1 UNI_ALGO_DISABLE_SHRINK_TO_FIT=1 )

# now it should find
find_package ( uni-algo REQUIRED CONFIG )
return_if_target_found ( uni-algo::uni-algo "was built and saved" )
