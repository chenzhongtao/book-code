// is_pointer example
#include <iostream>
#include <type_traits>

int main() {
  std::cout << std::boolalpha;
  std::cout << "is_pointer:" << std::endl;
  std::cout << "int: " << std::is_pointer<int>::value << std::endl;
  std::cout << "int*: " << std::is_pointer<int*>::value << std::endl;
  std::cout << "int**: " << std::is_pointer<int**>::value << std::endl;
  std::cout << "int(*)(int): " << std::is_pointer<int(*)(int)>::value << std::endl;
  return 0;
}

