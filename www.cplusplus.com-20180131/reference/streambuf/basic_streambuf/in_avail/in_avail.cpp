// get file size using pubseekoff
#include <iostream>     // std::cout, std::streambuf, std::streamsize
#include <fstream>      // std::ifstream

int main () {
  std::ifstream ifs ("test.txt");
  if (ifs.good()) {
    std::streambuf* pbuf = ifs.rdbuf();
    char c; ifs >> c;
    std::streamsize size = pbuf->in_avail();
    std::cout << "first character in file: " << c << '\n';
    std::cout << size << " characters in buffer after it\n";
  }
  ifs.close();

  return 0;
}

