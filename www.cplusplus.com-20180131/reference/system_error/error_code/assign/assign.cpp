// error_code::assign
#include <iostream>       // std::cout
#include <cerrno>         // errno
#include <system_error>   // std::error_code, std::generic_category
#include <cmath>          // std::pow

struct expnumber {
  double value;
  std::error_code error;
  expnumber (double base, double exponent) {
    value = std::pow(base,exponent);
    if (errno) error.assign (errno,std::generic_category());
  }
};

int main()
{
  expnumber foo (3.0, 2.0);
  std::cout << foo.value << "\t" << foo.error.message() << '\n';

  expnumber bar (3.0, 10e6);
  std::cout << bar.value << "\t" << bar.error.message() << '\n';

  return 0;
}

