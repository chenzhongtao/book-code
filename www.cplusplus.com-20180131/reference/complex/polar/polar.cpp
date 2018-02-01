// polar example
#include <iostream>     // std::cout
#include <complex>      // std::complex, std::polar

int main ()
{
  std::cout << "The complex whose magnitude is " << 2.0;
  std::cout << " and phase angle is " << 0.5;
  std::cout << " is " << std::polar (2.0, 0.5) << '\n';

  return 0;
}

