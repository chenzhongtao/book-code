// clearing errors
#include <iostream>     // std::cout
#include <fstream>      // std::fstream

int main () {
  char buffer [80];
  std::fstream myfile;

  myfile.open ("test.txt",std::fstream::in);

  myfile << "test";
  if (myfile.fail())
  {
    std::cout << "Error writing to test.txt\n";
    myfile.clear();
  }

  myfile.getline (buffer,80);
  std::cout << buffer << " successfully read from file.\n";

  return 0;
}

