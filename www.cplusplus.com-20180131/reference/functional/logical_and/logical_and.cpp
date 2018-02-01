// logical_and example
#include <iostream>     // std::cout, std::boolalpha
#include <functional>   // std::logical_and
#include <algorithm>    // std::transform

int main () {
  bool foo[] = {true,false,true,false};
  bool bar[] = {true,true,false,false};
  bool result[4];
  std::transform (foo, foo+4, bar, result, std::logical_and<bool>());
  std::cout << std::boolalpha << "Logical AND:\n";
  for (int i=0; i<4; i++)
    std::cout << foo[i] << " AND " << bar[i] << " = " << result[i] << "\n";
  return 0;
}

