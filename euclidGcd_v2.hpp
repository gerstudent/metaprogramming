#pragma once

namespace euclid_gcd_v2 {
template <class T>
T gcd(T a, T b) {
  return b ? gcd(b, a % b) : a;
}
}  // namespace euclid_gcd