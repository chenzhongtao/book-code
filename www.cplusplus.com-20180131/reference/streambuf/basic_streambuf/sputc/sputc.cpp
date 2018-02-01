// typewriter - sputc() example
#include <iostream>     // std::cin, std::cout, std::streambuf
#include <fstream>      // std::ofstream

int main () {
  char ch;
  std::ofstream ostr ("test.txt");
  if (ostr) {
    std::cout << "Writing to file. Type a dot (.) to end.\n";
    std::streambuf * pbuf = ostr.rdbuf();
    do {
      ch = std::cin.get();
      pbuf->sputc(ch);
    } while (ch!='.');
    ostr.close();
  }

  return 0;
}

