// atan valarray example
#include <iostream>     // std::cout
#include <cstddef>      // std::size_t
#include <cmath>        // std::atan(double)
#include <valarray>     // std::valarray(valarray)

int main ()
{
  double val[] = {0.0, 0.25, 0.5, 0.75, 1.0};
  std::valarray<double> foo (val,5);

  std::valarray<double> bar = atan (foo);

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

