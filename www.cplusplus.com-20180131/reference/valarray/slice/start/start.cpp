// slice::start example
#include <iostream>     // std::cout
#include <cstddef>      // std::size_t
#include <valarray>     // std::valarray, std::slice

int main ()
{
  std::valarray<int> foo (10);
  for (int i=0; i<10; ++i) foo[i]=i;

  std::slice slc (2,4,1);

  std::valarray<int> bar = foo[slc];

  std::cout << "slice starting at " << slc.start() << ":\n";
  for (std::size_t n=0; n<bar.size(); n++)
	  std::cout << bar[n] << ' ';
  std::cout << '\n';

  return 0;
}

