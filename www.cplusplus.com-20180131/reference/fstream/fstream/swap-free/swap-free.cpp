// swapping fstream objects
#include <fstream>      // std::fstream

int main () {
  std::fstream foo;
  std::fstream bar ("test.txt");

  swap(foo,bar);

  foo << "lorem ipsum";

  foo.close();

  return 0;
}

