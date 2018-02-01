// is_array example
#include <iostream>
#include <array>
#include <string>
#include <type_traits>

int main() {
  std::cout << std::boolalpha;
  std::cout << "is_array:" << std::endl;
  std::cout << "int: " << std::is_array<int>::value << std::endl;
  std::cout << "int[3]: " << std::is_array<int[3]>::value << std::endl;
  std::cout << "array<int,3>: " << std::is_array<std::array<int,3>>::value << std::endl;
  std::cout << "string: " << std::is_array<std::string>::value << std::endl;
  std::cout << "string[3]: " << std::is_array<std::string[3]>::value << std::endl;
  return 0;
}

