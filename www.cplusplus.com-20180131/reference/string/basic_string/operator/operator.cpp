// extract to string
#include <iostream>
#include <string>

main ()
{
  std::string name;

  std::cout << "Please, enter your name: ";
  std::cin >> name;
  std::cout << "Hello, " << name << "!\n";

  return 0;
}

