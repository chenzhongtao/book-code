// swapping ifstream objects
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream

int main () {
  std::ifstream foo;
  std::ifstream bar ("test.txt");

  swap (foo,bar);

  char c = foo.get();

  while (foo.good()) {
    std::cout << c;
    c = foo.get();
  }

  foo.close();

  return 0;
}

