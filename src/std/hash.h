//
// Copyright (c) 2024, Manticore Software LTD (https://manticoresearch.com)
// All rights reserved
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License. You should have
// received a copy of the GPL license along with this program; if you
// did not, you can find it at http://www.gnu.org
//

#pragma once

#include "generics.h"

// #define XXH_STATIC_LINKING_ONLY
// #define XXH_INLINE_ALL
// #undef XXH_NAMESPACE

/*!
 * @brief Gives access to internal state declaration, required for static allocation.
 *
 * Incompatible with dynamic linking, due to risks of ABI changes.
 *
 * Usage:
 * @code{.c}
 *     #define XXH_STATIC_LINKING_ONLY
 *     #include "xxhash.h"
 * @endcode
 */
#  define XXH_STATIC_LINKING_ONLY
/* Do not undef XXH_STATIC_LINKING_ONLY for Doxygen */

/*!
 * @brief Gives access to internal definitions.
 *
 * Usage:
 * @code{.c}
 *     #define XXH_STATIC_LINKING_ONLY
 *     #define XXH_IMPLEMENTATION
 *     #include "xxhash.h"
 * @endcode
 */
#  define XXH_IMPLEMENTATION
/* Do not undef XXH_IMPLEMENTATION for Doxygen */

/*!
 * @brief Exposes the implementation and marks all functions as `inline`.
 *
 * Use these build macros to inline xxhash into the target unit.
 * Inlining improves performance on small inputs, especially when the length is
 * expressed as a compile-time constant:
 *
 *  https://fastcompression.blogspot.com/2018/03/xxhash-for-small-keys-impressive-power.html
 *
 * It also keeps xxHash symbols private to the unit, so they are not exported.
 *
 * Usage:
 * @code{.c}
 *     #define XXH_INLINE_ALL
 *     #include "xxhash.h"
 * @endcode
 * Do not compile and link xxhash.o as a separate object, as it is not useful.
 */
#  define XXH_INLINE_ALL
#  undef XXH_INLINE_ALL
/*!
 * @brief Exposes the implementation without marking functions as inline.
 */
#  define XXH_PRIVATE_API
#  undef XXH_PRIVATE_API
/*!
 * @brief Emulate a namespace by transparently prefixing all symbols.
 *
 * If you want to include _and expose_ xxHash functions from within your own
 * library, but also want to avoid symbol collisions with other libraries which
 * may also include xxHash, you can use @ref XXH_NAMESPACE to automatically prefix
 * any public symbol from xxhash library with the value of @ref XXH_NAMESPACE
 * (therefore, avoid empty or numeric values).
 *
 * Note that no change is required within the calling program as long as it
 * includes `xxhash.h`: Regular symbol names will be automatically translated
 * by this header.
 */
#  define XXH_NAMESPACE /* YOUR NAME HERE */
#  undef XXH_NAMESPACE
#include "xxhash.h"

// a wrapper for xxHash
FORCE_INLINE uint64_t HashWithSeed ( const void * pInput, size_t tLength, uint64_t uSeed )
{
	return XXH3_64bits_withSeed ( pInput, tLength, uSeed );
}
