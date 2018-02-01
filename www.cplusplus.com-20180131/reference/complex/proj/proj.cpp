// proj example
#include <iostream>     // std::cout
#include <complex>      // std::complex, std::proj
#include <limits>       // std::numeric_limits

int main ()
{
  std::complex<double> mycomplex (std::numeric_limits<double>::infinity(),2.0);

  std::cout << "The projection of " << mycomplex << " is " << std::proj(mycomplex) << '\n';

  return 0;
}

