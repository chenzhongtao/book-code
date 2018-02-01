// swapping ostringstream objects
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::ostringstream

int main () {

  std::ostringstream foo;
  std::ostringstream bar;

  foo << 100;
  bar << 200;

  foo.swap(bar);

  std::cout << "foo: " << foo.str() << '\n';
  std::cout << "bar: " << bar.str() << '\n';

  return 0;
}

