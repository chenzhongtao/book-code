// is_placeholder example
#include <iostream>     // std::cout, std::boolalpha
#include <functional>   // std::is_placeholder, std::placeholders

int main () {
  using namespace std::placeholders;  // introduces _1

  std::cout << std::is_placeholder<decltype(_1)>::value << '\n';
  std::cout << std::is_placeholder<decltype(_2)>::value << '\n';
  std::cout << std::is_placeholder<int>::value << '\n';

  return 0;
}

