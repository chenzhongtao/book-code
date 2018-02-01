// istream constructor
#include <iostream>     // std::ios, std::istream, std::cout
#include <fstream>      // std::filebuf

int main () {
  std::filebuf fb;
  if (fb.open ("test.txt",std::ios::in))
  {
    std::istream is(&fb);
    while (is)
      std::cout << char(is.get());
    fb.close();
  }
  return 0;
}

