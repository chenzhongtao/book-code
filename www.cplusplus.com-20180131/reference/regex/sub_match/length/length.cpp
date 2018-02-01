// sub_match::length
#include <iostream>
#include <string>
#include <regex>

int main ()
{
  std::string s ("subject");
  std::smatch m;
  std::regex e ("(sub)(.*)");

  std::regex_match ( s, m, e );

  for (unsigned i=0; i<m.size(); ++i) {
    std::cout << "match " << i << " (" << m[i] << ")";
    std::cout << " has a length of " << m[i].length() << std::endl;
  }
  return 0;
}

