// reference_wrapper::operator type&
#include <iostream>     // std::cout
#include <functional>   // std::reference_wrapper

int main () {
  int foo;

  std::reference_wrapper<int> wrap (foo);

  static_cast<int&>(wrap) = 10;
  int& bar = wrap;
  ++bar;

  std::cout << foo << '\n';

  return 0;
}

