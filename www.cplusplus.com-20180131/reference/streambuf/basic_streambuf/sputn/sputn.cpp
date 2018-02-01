// sputn() example
#include <iostream>     // std::streambuf
#include <fstream>      // std::ofstream

int main () {
  const char sentence[]= "Sample sentence";

  std::ofstream ostr ("test.txt");
  if (ostr) {
    std::streambuf * pbuf = ostr.rdbuf();
    pbuf->sputn (sentence,sizeof(sentence)-1);
    ostr.close();
  }

  return 0;
}

