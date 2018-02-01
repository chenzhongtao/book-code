// show file content - sbumpc() example
#include <iostream>     // std::cout, std::streambuf
#include <fstream>      // std::ifstream

int main () {
  std::ifstream istr ("test.txt");
  if (istr) {
    std::streambuf * pbuf = istr.rdbuf();
    while ( pbuf->sgetc() != std::streambuf::traits_type::eof() )
    {
      char ch = pbuf->sbumpc();
      std::cout << ch;
    }
    istr.close();
  }
  return 0;
}

