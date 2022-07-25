#include "euclidGcd_v2.hpp"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int a, b;
  cin >> a >> b;
  auto x = euclid_gcd_v2::gcd<int>(a, b);
  cout << x << endl;
  return 0;
}