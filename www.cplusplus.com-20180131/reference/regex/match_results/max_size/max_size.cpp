// match_results::max_size
#include <iostream>
#include <regex>

int main ()
{
  std::match_results<char*> mr;

  std::cout << "max_size: " << mr.max_size() << std::endl;

  return 0;
}

