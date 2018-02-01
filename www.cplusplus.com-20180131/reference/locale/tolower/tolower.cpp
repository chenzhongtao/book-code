// tolower example (C++)
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::tolower

int main ()
{
  std::locale loc;
  std::string str="Test String.\n";
  for (std::string::size_type i=0; i<str.length(); ++i)
    std::cout << std::tolower(str[i],loc);
  return 0;
}

