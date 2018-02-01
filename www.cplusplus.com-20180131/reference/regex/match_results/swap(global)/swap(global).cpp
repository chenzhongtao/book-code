// swap match_results
// - using smatch, a standard alias of match_results<string::iterator>
#include <iostream>
#include <string>
#include <regex>

int main ()
{
  std::string s ("There is a needle in this haystack.");
  std::smatch m1,m2;

  std::regex_search ( s, m1, std::regex("needle") );
  std::regex_search ( s, m2, std::regex("haystack") );

  swap(m1,m2);

  std::cout << m1.format("m1 contains [$0].") << std::endl;
  std::cout << m2.format("m2 contains [$0].") << std::endl;

  return 0;
}

