// sub_match::str
#include <iostream>
#include <string>
#include <regex>

int main ()
{
  using namespace std::regex_constants;

  std::cmatch m;

  std::regex_match ( "subject", m, std::regex("(sub)(.*)") );

  std::string output = "matches:\n";
  for (std::cmatch::iterator it = m.begin(); it!=m.end(); ++it) {
    output+= it->str() + "\n";
  }

  std::cout << output << std::endl;
  return 0;
}

