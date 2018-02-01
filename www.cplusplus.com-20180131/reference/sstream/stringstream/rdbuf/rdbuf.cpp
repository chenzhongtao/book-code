// stringstream::rdbuf
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream, std::stringbuf

int main () {
  std::stringstream ss;

  // using stringbuf directly:
  std::stringbuf *pbuf = ss.rdbuf();
  pbuf->sputn ("Example string",13);

  char buffer[80];
  pbuf->sgetn (buffer,80);

  std::cout << buffer;

  return 0;
}

