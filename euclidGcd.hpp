#pragma once
#include <cstddef>

namespace euclid_gcd {
template <size_t a, size_t b>
struct gcdCase {
  static constexpr size_t temp = b ? a % b : 0;
  static constexpr size_t ans = temp ? gcdCase<b, temp>::ans : b;
};

template <size_t a>
struct gcdCase<a, 0> {
  static constexpr size_t ans = a;
};

template <size_t a, size_t b>
struct gcd {
  static constexpr size_t num1 = (a > b) ? a : b;
  static constexpr size_t num2 = (num1 == a) ? b : a;
  static constexpr size_t ans = gcdCase<num1, num2>::ans;
};

}  // namespace euclid_gcd
