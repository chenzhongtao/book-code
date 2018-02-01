// filebuf::close()
#include <iostream>
#include <fstream>

int main () {
  std::ifstream is;
  std::filebuf * fb = is.rdbuf();

  fb->open ("test.txt",std::ios::in);

  // appending operations

  fb->close();

  return 0;
}

