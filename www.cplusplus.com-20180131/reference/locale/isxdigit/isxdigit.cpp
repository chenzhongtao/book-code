// isxdigit example (C++)
#include <iostream>       // std::cout, std::hex, std::dec
#include <string>         // std::string
#include <sstream>        // std::stringstream
#include <locale>         // std::locale, std::isxdigit

int main ()
{
  std::locale loc;
  std::string str="ffff";
  if ( std::isxdigit(str[0],loc) )
  {
    int number;
    std::stringstream(str) >> std::hex >> number;
    std::cout << "The hexadecimal number " << std::hex << number;
    std::cout << " is " << std::dec << number << ".\n";
  }
  return 0;
}

