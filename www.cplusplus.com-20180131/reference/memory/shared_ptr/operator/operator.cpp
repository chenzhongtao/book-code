// shared_ptr i/o
#include <iostream>
#include <memory>

int main () {
  std::shared_ptr<int> foo (new int (10));

  std::cout << " foo: " << foo << '\n';
  std::cout << "*foo: " << *foo << '\n';

  return 0;
}

