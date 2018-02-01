// fstream::is_open
#include <iostream>     // std::cout
#include <fstream>      // std::fstream

int main () {
  std::fstream fs;
  fs.open ("test.txt");
  if (fs.is_open())
  {
    fs << "lorem ipsum";
    std::cout << "Operation successfully performed\n";
    fs.close();
  }
  else
  {
    std::cout << "Error opening file";
  }
  return 0;
}

