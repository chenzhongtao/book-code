// numpunct::grouping example
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::numpunct, std::use_facet

// custom numpunct with grouping:
struct my_numpunct : std::numpunct<char> {
  std::string do_grouping() const {return "\03";}
};

int main() {
  std::locale loc (std::cout.getloc(),new my_numpunct);
  std::cout.imbue(loc);
  std::cout << "one million: " << 1000000 << '\n';
  return 0;
}

