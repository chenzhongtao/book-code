// greater_equal example
#include <iostream>     // std::cout
#include <functional>   // std::greater_equal, std::bind2nd
#include <algorithm>    // std::count_if

int main () {
  int numbers[]={20,-30,10,-40,0};
  int cx = std::count_if (numbers, numbers+5, std::bind2nd(std::greater_equal<int>(),0));
  std::cout << "There are " << cx << " non-negative elements.\n";
  return 0;
}

