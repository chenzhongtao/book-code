// string::operator[]
#include <iostream>
#include <string>

int main ()
{
  std::string str ("Test string");
  for (int i=0; i<str.length(); ++i)
  {
    std::cout << str[i];
  }
  return 0;
}

