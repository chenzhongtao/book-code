// not_equal_to example
#include <iostream>     // std::cout
#include <functional>   // std::not_equal_to
#include <algorithm>    // std::adjacent_find

int main () {
  int numbers[]={10,10,10,20,20};
  int* pt = std::adjacent_find (numbers, numbers+5, std::not_equal_to<int>()) +1;
  std::cout << "The first different element is " << *pt << '\n';
  return 0;
}

