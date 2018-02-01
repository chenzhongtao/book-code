// filebuf::is_open() example
#include <iostream>
#include <fstream>

int main () {
  std::ifstream is;
  std::filebuf * fb = is.rdbuf();
  fb->open ("test.txt",std::ios::in);

  if ( fb->is_open() )
    std::cout << "the file is open.\n";
  else
    std::cout << "the file is not open.\n";

  fb->close();

  return 0;
}

