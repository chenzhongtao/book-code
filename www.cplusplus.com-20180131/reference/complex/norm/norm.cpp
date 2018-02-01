// norm example
#include <iostream>     // std::cout
#include <complex>      // std::complex, std::norm

int main ()
{
  std::complex<double> mycomplex (3.0,4.0);

  std::cout << "The norm of " << mycomplex << " is " << std::norm(mycomplex) << '\n';

  return 0;
}

