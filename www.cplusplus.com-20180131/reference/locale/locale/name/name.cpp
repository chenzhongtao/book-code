// locale::name example
#include <iostream>       // std::cout
#include <locale>         // std::locale

int main ()
{
  std::locale loc;        // global locale

  std::cout << "The global locale is: " << loc.name() << '\n';

  return 0;
}

