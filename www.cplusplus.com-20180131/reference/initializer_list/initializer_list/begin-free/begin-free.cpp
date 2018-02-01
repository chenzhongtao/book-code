// begin/end (initializer_list)
#include <iostream>          // std::cout
#include <initializer_list>  // std::initializer_list

template<class T> void print_list (std::initializer_list<T> il) {
  for (const T* it=begin(il); it!=end(il); ++it) std::cout << ' ' << *it;
  std::cout << '\n';
}

int main ()
{
  print_list ({10,20,30});
  return 0;
}

