// negate example
#include <iostream>     // std::cout
#include <functional>   // std::negate
#include <algorithm>    // std::transform

int main () {
  int numbers[]={10,-20,30,-40,50};
  std::transform (numbers, numbers+5, numbers, std::negate<int>());
  for (int i=0; i<5; i++)
    std::cout << numbers[i] << ' ';
  std::cout << '\n';
  return 0;
}

