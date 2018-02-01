// modify unifbuf flag
#include <ios>         // std::unitbuf
#include <fstream>     // std::ofstream

int main () {
  std::ofstream outfile ("test.txt");
  outfile << std::unitbuf <<  "Test " << "file" << '\n';  // flushed three times
  outfile.close();
  return 0;
}

