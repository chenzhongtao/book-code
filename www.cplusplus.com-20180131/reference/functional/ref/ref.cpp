// ref example
#include <iostream>     // std::cout
#include <functional>   // std::ref

int main () {
  int foo (10);

  auto bar = std::ref(foo);

  ++bar;

  std::cout << foo << '\n';

  return 0;
}

