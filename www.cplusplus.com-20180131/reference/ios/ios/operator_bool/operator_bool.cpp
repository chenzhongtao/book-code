// evaluating a stream
#include <iostream>     // std::cerr
#include <fstream>      // std::ifstream

int main () {
  std::ifstream is;
  is.open ("test.txt");
  if (is) {
    // read file
  }
  else {
    std::cerr << "Error opening 'test.txt'\n";
  }
  return 0;
}

