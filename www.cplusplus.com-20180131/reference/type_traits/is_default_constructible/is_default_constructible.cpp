// is_default_constructible example
#include <iostream>
#include <type_traits>

struct A { };
struct B { B(){} };
struct C { C(int){} };

int main() {
  std::cout << std::boolalpha;
  std::cout << "is_default_constructible:" << std::endl;
  std::cout << "int: " << std::is_default_constructible<int>::value << std::endl;
  std::cout << "A: " << std::is_default_constructible<A>::value << std::endl;
  std::cout << "B: " << std::is_default_constructible<B>::value << std::endl;
  std::cout << "C: " << std::is_default_constructible<C>::value << std::endl;
  return 0;
}

