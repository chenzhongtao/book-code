// valarray::apply example
#include <iostream>     // std::cout
#include <cstddef>      // std::size_t
#include <valarray>     // std::valarray

int increment (int x) {return ++x;}

int main ()
{
  int init[]={10,20,30,40,50};
  std::valarray<int> foo (init,5);

  std::valarray<int> bar = foo.apply(increment);

  std::cout << "foo contains:";
  for (std::size_t n=0; n<bar.size(); n++)
	  std::cout << ' ' << bar[n];
  std::cout << '\n';

  return 0;
}

