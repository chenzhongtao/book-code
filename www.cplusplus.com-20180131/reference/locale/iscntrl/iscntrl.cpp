// iscntrl example (C++)
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::iscntrl

int main ()
{
  std::locale loc;
  std::string str="first line \n second line \n";
  for (std::string::size_type i=0; i<str.length(); ++i)
  {
    if (std::iscntrl(str[i])) break;
    std::cout << str[i];
  }
  return 0;
}

