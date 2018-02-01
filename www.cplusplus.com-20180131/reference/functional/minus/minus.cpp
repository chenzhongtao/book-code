// minus example
#include <iostream>     // std::cout
#include <functional>   // std::minus
#include <algorithm>    // std::transform

int main () {
  int numbers[]={10,20,30};
  int result;
  result = std::accumulate (numbers, numbers+3, 100, std::minus<int>());
  std::cout << "The result of 100-10-20-30 is " << result << ".\n";
  return 0;
}

