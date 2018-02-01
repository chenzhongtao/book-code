// isspace example (C++)
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::isspace

int main ()
{
  std::locale loc;
  std::string str="Example sentence to test isspace\n";
  char c;
  for (std::string::size_type i=0; i<str.length(); ++i)
  {
    c=str[i];
    if (std::isspace(c,loc)) c='\n';
    std::cout << c;
  }
  return 0;
}

