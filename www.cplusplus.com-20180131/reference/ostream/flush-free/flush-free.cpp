// Flushing files (flush manipulator)
#include <ostream>      // std::flush
#include <fstream>      // std::ofstream

int main () {

  std::ofstream outfile ("test.txt");

  for (int n=0; n<100; n++)
    outfile << n << std::flush;

  outfile.close();

  return 0;
}

