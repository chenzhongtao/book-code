// ostringstream::rdbuf
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::ostringstream, std::stringbuf

int main () {
  std::ostringstream oss;

  // using stringbuf directly
  std::stringbuf *pbuf = oss.rdbuf();
  pbuf->sputn ("Sample string",13);
  std::cout << pbuf->str();

  return 0;
}

