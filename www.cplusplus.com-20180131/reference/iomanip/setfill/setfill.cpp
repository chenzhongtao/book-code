// setfill example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setfill, std::setw

int main () {
  std::cout << std::setfill ('x') << std::setw (10);
  std::cout << 77 << std::endl;
  return 0;
}

