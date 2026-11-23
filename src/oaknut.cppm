// SPDX-License-Identifier: MIT

module;

// Keep all standard library dependencies in the global module fragment.
#include <algorithm>
#include <bit>
#include <cassert>
#include <compare>
#include <cstddef>
#include <cstdint>
#include <exception>
#include <optional>
#include <tuple>
#include <type_traits>
#include <variant>
#include <vector>

export module oaknut;

// Preserve the same types and linkage as the header-only interface.
export extern "C++" {
#include "oaknut/oaknut.hpp"
}
