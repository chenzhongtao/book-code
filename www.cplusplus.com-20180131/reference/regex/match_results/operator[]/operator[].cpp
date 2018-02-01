// match_results::operator[]
// - using cmatch, a standard alias of match_results<const char*>
#include <iostream>
#include <string>
#include <regex>

int main ()
{
  std::cmatch m;

  std::regex_match ( "subject", m, std::regex("(sub)(.*)") );

  for (unsigned i=0; i<m.size(); ++i) {
    std::cout << "match " << i << ": " << m[i];
    std::cout << " (with a length of " << m[i].length() << ")\n";
  }

  return 0;
}

