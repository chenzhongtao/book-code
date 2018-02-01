// is_arithmetic example
#include <iostream>
#include <type_traits>
#include <complex>

int main() {
  std::cout << std::boolalpha;
  std::cout << "is_arithmetic:" << std::endl;
  std::cout << "char: " << std::is_arithmetic<char>::value << std::endl;
  std::cout << "float: " << std::is_arithmetic<float>::value << std::endl;
  std::cout << "float*: " << std::is_arithmetic<float*>::value << std::endl;
  std::cout << "complex<double>: " << std::is_arithmetic<std::complex<double>>::value << std::endl;
  return 0;
}

