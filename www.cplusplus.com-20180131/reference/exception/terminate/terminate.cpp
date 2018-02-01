// terminate example
#include <iostream>       // std::cout, std::cerr
#include <exception>      // std::exception, std::terminate

int main (void) {
  char* p;
  std::cout << "Attempting to allocate 1 GiB...";
  try {
    p = new char [1024*1024*1024];
  }
  catch (std::exception& e) {
    std::cerr << "ERROR: could not allocate storage\n";
    std::terminate();
  }
  std::cout << "Ok\n";
  delete[] p;
  return 0;
}

