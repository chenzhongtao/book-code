// swap (pair overload)
#include <utility>      // std::pair
#include <iostream>     // std::cout

int main () {
  std::pair<int,char> foo (10,'a');
  std::pair<int,char> bar (90,'z');

  swap (foo,bar);

  std::cout << "foo contains: " << foo.first;
  std::cout << " and " << foo.second << '\n';

  return 0;
}

