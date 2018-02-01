// print the content of a text file.
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream

int main () {
  std::ifstream ifs;

  ifs.open ("test.txt");

  char c = ifs.get();

  while (ifs.good()) {
    std::cout << c;
    c = ifs.get();
  }

  ifs.close();

  return 0;
}

