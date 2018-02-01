// conj example
#include <iostream>     // std::cout
#include <complex>      // std::complex, std::conj

int main ()
{
  std::complex<double> mycomplex (10.0,2.0);

  std::cout << "The conjugate of " << mycomplex << " is " << std::conj(mycomplex) << '\n';

  return 0;
}

