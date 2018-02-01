// match_results::prefix/suffix
// - using smatch, a standard alias of match_results<string::iterator>
#include <iostream>
#include <string>
#include <regex>

int main ()
{
  std::string s ("there is a needle in this haystack");
  std::smatch m;
  std::regex e ("needle");

  std::cout << "searching for needle in [" << s << "]\n";
  std::regex_search ( s, m, e );

  if (m.ready()) {
    std::cout << m[0] << " found!\n";
    std::cout << "prefix: [" << m.prefix() << "]\n";
    std::cout << "suffix: [" << m.suffix() << "]\n";
  }

  return 0;
}

