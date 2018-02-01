// modulus example
#include <iostream>     // std::cout
#include <functional>   // std::modulus, std::bind2nd
#include <algorithm>    // std::transform

int main () {
  int numbers[]={1,2,3,4,5};
  int remainders[5];
  std::transform (numbers, numbers+5, remainders, std::bind2nd(std::modulus<int>(),2));
  for (int i=0; i<5; i++)
    std::cout << numbers[i] << " is " << (remainders[i]==0?"even":"odd") << '\n';
  return 0;
}

