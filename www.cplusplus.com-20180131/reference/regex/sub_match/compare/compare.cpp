// sub_match::compare
#include <iostream>
#include <regex>

int main ()
{
  using namespace std::regex_constants;

  std::cmatch m;

  std::regex_search ( "there is a needle in this haystack", m, std::regex("n\\w+") );

  if (m[0].compare("needle") == 0) std::cout << "needle found!" << std::endl;

  return 0;
}

