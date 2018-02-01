// basic_regex::getloc
// note: using regex, a standard alias of basic_regex<char>
#include <iostream>
#include <regex>
#include <locale>

int main ()
{
  std::regex myregex;
  std::locale mylocale ("");
  myregex.imbue (mylocale);
  myregex.assign ("sub[a-z]*");
  
  if (std::regex_match ("subject", myregex))
    std::cout << "The string matches";
  else
    std::cout << "The string does not match";

  std::cout << " using locale: " << myregex.getloc().name() << std::endl;

  return 0;
}

