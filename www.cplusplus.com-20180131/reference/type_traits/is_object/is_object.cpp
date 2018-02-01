// is_object example
#include <iostream>
#include <type_traits>

class A {};

int main() {
  std::cout << std::boolalpha;
  std::cout << "is_object:" << std::endl;
  std::cout << "int: " << std::is_object<int>::value << std::endl;
  std::cout << "A: " << std::is_object<A>::value << std::endl;
  std::cout << "A&: " << std::is_object<A&>::value << std::endl;
  std::cout << "A*: " << std::is_object<A*>::value << std::endl;
  std::cout << "int(int): " << std::is_object<int(int)>::value << std::endl;
  std::cout << "int(*)(int): " << std::is_object<int(*)(int)>::value << std::endl;
  return 0;
}

