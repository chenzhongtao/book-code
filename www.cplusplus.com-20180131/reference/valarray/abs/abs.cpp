// abs valarray example
#include <iostream>     // std::cout
#include <cstddef>      // std::size_t
#include <cstdlib>      // std::abs(int)
#include <valarray>     // std::valarray, std::abs(valarray)

int main ()
{
  int val[] = {5, 3, -10, 4, -7};
  std::valarray<int> foo (val,5);

  std::valarray<int> bar = abs (foo);

  std::cout << "foo:";
  for (std::size_t i=0; i<foo.size(); ++i)
    std::cout << ' ' << foo[i];
  std::cout << '\n';

  std::cout << "bar:";
  for (std::size_t i=0; i<bar.size(); ++i)
    std::cout << ' ' << bar[i];
  std::cout << '\n';

  return 0;
}

