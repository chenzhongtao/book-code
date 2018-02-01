// basic_ios::exceptions
#include <iostream>     // std::cerr
#include <fstream>      // std::ifstream

int main () {
  std::ifstream file;
  file.exceptions ( std::ifstream::failbit | std::ifstream::badbit );
  try {
    file.open ("test.txt");
    while (!file.eof()) file.get();
  }
  catch (std::ifstream::failure e) {
    std::cerr << "Exception opening/reading file";
  }

  file.close();

  return 0;
}

