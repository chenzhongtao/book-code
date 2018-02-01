// isalnum example (C++)
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::isalnum

int main ()
{
  std::locale loc;
  std::string str = "c3po...";
  std::string::size_type i=0;
  while ( (i<str.length()) && (std::isalnum(str[i])) ) {++i;}
  std::cout << "The first " << i << " characters are alphanumeric.\n";
  return 0;
}

