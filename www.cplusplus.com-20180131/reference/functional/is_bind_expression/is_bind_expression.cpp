// is_bind_expression example
#include <iostream>     // std::cout, std::boolalpha
#include <functional>   // std::bind, std::plus, std::placeholders, std::is_bind_expression

int main () {
  using namespace std::placeholders;  // introduces _1
  auto increase_int = std::bind (std::plus<int>(),_1,1);

  std::cout << std::boolalpha;
  std::cout << std::is_bind_expression<decltype(increase_int)>::value << '\n';

  return 0;
}

