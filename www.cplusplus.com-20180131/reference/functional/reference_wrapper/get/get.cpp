// reference_wrapper::get
#include <iostream>     // std::cout
#include <functional>   // std::reference_wrapper

int main () {
  int i;

  std::reference_wrapper<int> foo (i);

  foo.get() = 10;

  std::cout << foo.get() << '\n';

  return 0;
}

