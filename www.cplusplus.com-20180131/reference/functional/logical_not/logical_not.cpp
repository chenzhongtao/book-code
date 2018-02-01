// logical_not example
#include <iostream>     // std::cout, std::boolalpha
#include <functional>   // std::logical_not
#include <algorithm>    // std::transform

int main () {
  bool values[] = {true,false};
  bool result[2];
  std::transform (values, values+2, result, std::logical_not<bool>());
  std::cout << std::boolalpha << "Logical NOT:\n";
  for (int i=0; i<2; i++)
    std::cout << "NOT " << values[i] << " = " << result[i] << "\n";
  return 0;
}

