// read a file into buffer - sgetn() example
#include <iostream>     // std::cout, std::streambuf, std::streamsize
#include <fstream>      // std::ifstream

int main () {
  char* contents;
  std::ifstream istr ("test.txt");

  if (istr) {
    std::streambuf * pbuf = istr.rdbuf();
    std::streamsize size = pbuf->pubseekoff(0,istr.end);
    pbuf->pubseekoff(0,istr.beg);       // rewind
    contents = new char [size];
    pbuf->sgetn (contents,size);
    istr.close();
    std::cout.write (contents,size);
  }
  return 0;
}

