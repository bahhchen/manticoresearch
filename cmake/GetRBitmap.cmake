cmake_minimum_required ( VERSION 3.17 FATAL_ERROR )

# Offline build: sources come from ${MANTICORE_DEPS_DIR}/roaring, nothing is downloaded.
# Upstream origin (kept for version upgrades): https://github.com/RoaringBitmap/CRoaring, tag v4.3.2

include ( local_deps )

# try to find quietly (will work most of the times)
find_package ( roaring QUIET CONFIG )
return_if_target_found ( roaring::roaring "found ready (no need to build)" )

# not found. Take local sources, staged aside so that the deps folder stays pristine
resolve_local_src ( roaring ROARINGBITMAP_ORIG )
stage_local_src ( roaring "${ROARINGBITMAP_ORIG}" ROARINGBITMAP_SRC )

# build external project
get_build ( ROARINGBITMAP_BUILD roaring )
reset_stale_external_build ( roaring "${ROARINGBITMAP_BUILD}" )
external_build ( roaring ROARINGBITMAP_SRC ROARINGBITMAP_BUILD ROARING_EXCEPTIONS=0 ROARING_USE_CPM=0 ENABLE_ROARING_TESTS=0 ROARING_DISABLE_AVX=1 ROARING_DISABLE_NEON=1 ROARING_DISABLE_AVX512=1 )

# now it should find
find_package ( roaring REQUIRED CONFIG )
return_if_target_found ( roaring::roaring "was built and saved" )
