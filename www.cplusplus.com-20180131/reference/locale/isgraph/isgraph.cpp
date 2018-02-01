// isgraph example (C++)
#include <iostream>       // std::cout
#include <fstream>        // std::ifstream
#include <locale>         // std::locale, std::isgraph

int main ()
{
  std::locale loc;
  std::ifstream myfile ("myfile.txt");
  char c;
  while (myfile.good())
  {
    myfile >> c;
    if (std::isgraph(c,loc)) std::cout << c;
  }
  myfile.close();
  return 0;
}

