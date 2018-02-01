// less_equal example
#include <iostream>     // std::cout
#include <functional>   // std::less_equal, std::bind2nd
#include <algorithm>    // std::count_if

int main () {
  int numbers[]={25,50,75,100,125};
  int cx = std::count_if (numbers, numbers+5, std::bind2nd(std::less_equal<int>(),100));
  std::cout << "There are " << cx << " elements lower than or equal to 100.\n";
  return 0;
}

