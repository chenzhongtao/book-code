// isblank example (C++11)
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::isblank

int main ()
{
  std::locale loc;
  std::string str="Example sentence to test isblank\n";
  for (char c:str)
  {
    if (std::isblank(c,loc)) c='\n';
    std::cout << c;
  }
  return 0;
}

