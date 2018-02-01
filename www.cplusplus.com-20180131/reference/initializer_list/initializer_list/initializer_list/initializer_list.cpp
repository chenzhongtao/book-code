// initializer_list example
#include <iostream>          // std::cout
#include <initializer_list>  // std::initializer_list

int main ()
{
  std::initializer_list<int> mylist;
  mylist = { 10, 20, 30 };
  std::cout << "mylist contains:";
  for (int x: mylist) std::cout << ' ' << x;
  std::cout << '\n';
  return 0;
}

