// isupper example (C++)
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::isupper, std::tolower

int main ()
{
  std::locale loc;
  std::string str="Test String.\n";
  char c;
  for (std::string::size_type i=0; i<str.length(); ++i)
  {
    c=str[i];
    if (std::isupper(c,loc)) c=std::tolower(c,loc);
    std::cout << c;
  }
  return 0;
}

