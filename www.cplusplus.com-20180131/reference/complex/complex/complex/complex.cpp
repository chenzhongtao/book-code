// complex constructor example
#include <iostream>     // std::cout
#include <complex>      // std::complex

int main ()
{
  std::complex<double> first (2.0,2.0);
  std::complex<double> second (first);
  std::complex<long double> third (second);

  std::cout << third << '\n';

  return 0;
}

