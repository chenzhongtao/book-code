// resetiosflags example
#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip>      // std::setiosflags, std::resetiosflags

int main () {
  std::cout << std::hex << std::setiosflags (std::ios::showbase);
  std::cout << 100 << std::endl;
  std::cout << std::resetiosflags(std::ios::showbase) << 100 << std::endl;
  return 0;
}

