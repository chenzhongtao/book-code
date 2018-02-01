// evaluating a stream (not)
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream

int main () {
  std::ifstream is;
  is.open ("test.txt");
  if (!is)
    std::cerr << "Error opening 'test.txt'\n";
  return 0;
}

