// initializer_list::begin/end
#include <iostream>          // std::cout
#include <string>            // std::string
#include <sstream>           // std::stringstream
#include <initializer_list>  // std::initializer_list

struct myclass {
  std::string str;
  myclass(std::initializer_list<int> args) {
    std::stringstream ss;
    std::initializer_list<int>::iterator it;  // same as: const int* it
    for ( it=args.begin(); it!=args.end(); ++it) ss << ' ' << *it;
    str = ss.str();
  }
};

int main ()
{
  myclass myobject {10, 20, 30};
  std::cout << "myobject contains:" << myobject.str << '\n';
  return 0;
}

