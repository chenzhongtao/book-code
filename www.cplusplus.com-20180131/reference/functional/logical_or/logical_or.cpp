// logical_or example
#include <iostream>     // std::cout, std::boolalpha
#include <functional>   // std::logical_or
#include <algorithm>    // std::transform

int main () {
  bool foo[] = {true,false,true,false};
  bool bar[] = {true,true,false,false};
  bool result[4];
  std::transform (foo, foo+4, bar, result, std::logical_or<bool>());
  std::cout << std::boolalpha << "Logical OR:\n";
  for (int i=0; i<4; i++)
    std::cout << foo[i] << " OR " << bar[i] << " = " << result[i] << "\n";
  return 0;
}

