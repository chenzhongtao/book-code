// std::real example
#include <iostream>     // std::cout
#include <complex>      // std::complex, std::real

int main ()
{
  std::complex<double> mycomplex (10.0,1.0);

  std::cout << "Real part: " << std::real(mycomplex) << '\n';

  return 0;
}

