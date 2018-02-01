// modify flags
#include <iostream>     // std::cout, std::ios

int main () {
  std::cout.flags ( std::ios::right | std::ios::hex | std::ios::showbase );
  std::cout.width (10);
  std::cout << 100 << '\n';
  return 0;
}

