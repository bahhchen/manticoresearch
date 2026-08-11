cmake_minimum_required ( VERSION 3.17 FATAL_ERROR )

# Offline build: sources come from ${MANTICORE_DEPS_DIR}/json (or nlohmann_json), nothing is downloaded.
# Upstream origin (kept for version upgrades): https://github.com/nlohmann/json, tag v3.12.0

include ( local_deps )

# determine destination folder where we expect pre-built nljson
find_package ( nlohmann_json QUIET CONFIG )
return_if_target_found ( nlohmann_json::nlohmann_json "found ready (no need to build)" )

# not found. Take local sources, staged aside so that the deps folder stays pristine
resolve_local_src ( nlohmann_json NLJSON_ORIG )
stage_local_src ( nlohmann_json "${NLJSON_ORIG}" NLJSON_SRC )

# build external project
get_build ( NLJSON_BUILD nlohmann_json )
reset_stale_external_build ( nlohmann_json "${NLJSON_BUILD}" )
external_build ( nlohmann_json NLJSON_SRC NLJSON_BUILD JSON_BuildTests=0 JSON_MultipleHeaders=1 JSON_GlobalUDLs=0 )

# now it should find
find_package ( nlohmann_json REQUIRED CONFIG )
return_if_target_found ( nlohmann_json::nlohmann_json "was built and saved" )
