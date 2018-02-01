// copy a file using file stream buffers
#include <fstream>      // std::filebuf, std::ifstream, std::ofstream
#include <cstdio>       // EOF

int main () {
  std::ifstream ifs ("test.txt");
  std::ofstream ofs ("copy.txt");

  std::filebuf* inbuf  = ifs.rdbuf();
  std::filebuf* outbuf = ofs.rdbuf();

  char c = inbuf->sbumpc();
  while (c != EOF)
  {
    outbuf->sputc (c);
    c = inbuf->sbumpc();
  }

  ofs.close();
  ifs.close();

  return 0;
}

