// complex::real example
#include <iostream>     // std::cout
#include <complex>      // std::complex

int main ()
{
  std::complex<double> mycomplex (10.0,1.0);

  std::cout << "Real part: " << mycomplex.real() << '\n';

  return 0;
}

