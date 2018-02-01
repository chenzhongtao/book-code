// ostream constructor
#include <iostream>     // std::cout, std::ostream, std::ios
#include <fstream>      // std::filebuf

int main () {
  std::filebuf fb;
  fb.open ("test.txt",std::ios::out);
  std::ostream os(&fb);
  os << "Test sentence\n";
  fb.close();
  return 0;
}

