// array::cend example
#include <iostream>
#include <array>

int main ()
{
  std::array<int,5> myarray = { 15, 720, 801, 1002, 3502 };

  std::cout << "myarray contains:";
  for ( auto it = myarray.cbegin(); it != myarray.cend(); ++it )
    std::cout << ' ' << *it;   // cannot modify *it

  std::cout << '\n';

  return 0;
}

