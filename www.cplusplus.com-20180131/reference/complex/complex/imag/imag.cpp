// complex::imag example
#include <iostream>     // std::cout
#include <complex>      // std::complex

int main ()
{
  std::complex<double> mycomplex (20.0,2.0);

  std::cout << "Imaginary part: " << mycomplex.imag() << '\n';

  return 0;
}

