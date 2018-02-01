// basic_regex::imbue
// note: using regex, a standard alias of basic_regex<char>
#include <iostream>
#include <regex>
#include <locale>

int main ()
{
  std::regex myregex;

  myregex.imbue (std::locale::classic());
  myregex.assign ("sub[a-z]*");
  
  if (std::regex_match ("subject", myregex))
    std::cout << "The string matches." << std::endl;

  return 0;
}

