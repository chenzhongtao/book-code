// function::operator() example
#include <iostream>     // std::cout
#include <functional>   // std::function, std::plus, std::minus, std::multiplies

int main () {
  // an array of functions:
  std::function<int(int,int)> fn[] = {
    std::plus<int>(),
    std::minus<int>(),
    std::multiplies<int>()
  };

  for (auto& x: fn) std::cout << x(10,5) << '\n';

  return 0;
}

