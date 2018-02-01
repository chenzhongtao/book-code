// divides example
#include <iostream>     // std::cout
#include <functional>   // std::divides
#include <algorithm>    // std::transform

int main () {
  int first[]={10,40,90,40,10};
  int second[]={1,2,3,4,5};
  int results[5];
  std::transform (first, first+5, second, results, std::divides<int>());
  for (int i=0; i<5; i++)
    std::cout << results[i] << ' ';
  std::cout << '\n';
  return 0;
}

