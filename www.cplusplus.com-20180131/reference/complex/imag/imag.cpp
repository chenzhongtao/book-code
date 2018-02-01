// std::imag example
#include <iostream>     // std::cout
#include <complex>      // std::complex, std::imag

int main ()
{
  std::complex<double> mycomplex (20.0,2.0);

  std::cout << "Imaginary part: " << std::imag(mycomplex) << '\n';

  return 0;
}

