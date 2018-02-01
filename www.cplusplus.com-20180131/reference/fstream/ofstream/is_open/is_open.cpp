// ofstream::is_open
#include <iostream>     // std::cout
#include <fstream>      // std::ofstream

int main () {
  std::ofstream ofs;
  ofs.open ("test.txt");
  if (ofs.is_open())
  {
    ofs << "lorem ipsum";
    std::cout << "Output operation successfully performed\n";
    ofs.close();
  }
  else
  {
    std::cout << "Error opening file";
  }
  return 0;
}

