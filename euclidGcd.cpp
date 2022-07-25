#include "euclidGcd.hpp"

#include <iostream>

using std::cout;
using std::endl;

int main() {
  cout << "GCD(0, 0) = " << euclid_gcd::gcd<0, 0>::ans << endl;
  cout << "GCD(100, 500) = " << euclid_gcd::gcd<100, 500>::ans << endl;
  cout << "GCD(64, 128) = " << euclid_gcd::gcd<64, 128>::ans << endl;
  cout << "GCD(11, 121) = " << euclid_gcd::gcd<11, 121>::ans << endl;
  cout << "GCD(1984, 117056) = " << euclid_gcd::gcd<1984, 117056>::ans << endl;
  return 0;
}
