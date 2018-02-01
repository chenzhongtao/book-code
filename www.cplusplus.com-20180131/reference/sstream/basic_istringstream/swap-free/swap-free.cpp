// swapping istringstream objects
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::istringstream

int main () {

  std::istringstream foo ("100");
  std::istringstream bar ("200");

  swap(foo,bar);    // unqualified (uses argument-dependent lookup)

  int val;

  foo >> val; std::cout << "foo: " << val << '\n';
  bar >> val; std::cout << "bar: " << val << '\n';

  return 0;
}

