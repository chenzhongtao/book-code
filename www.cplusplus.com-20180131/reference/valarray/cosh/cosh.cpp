// cosh valarray example
#include <iostream>     // std::cout
#include <cstddef>      // std::size_t
#include <cmath>        // std::cosh(double)
#include <valarray>     // std::valarray, std::cos(valarray)

int main ()
{
  double val[] = {0.35, 1.22, 3.4};
  std::valarray<double> foo (val,3);

  std::valarray<double> bar = cosh (foo);

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

