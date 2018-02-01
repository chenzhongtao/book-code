// seed_seq::size
#include <iostream>
#include <random>
#include <iterator>
#include <array>

int main ()
{
  std::seed_seq seed = {102,406,7892};

  std::cout << "size: " << seed.size() << std::endl;

  std::ostream_iterator<unsigned> out (std::cout," ");
  std::cout << "elements: "; seed.param(out); std::cout << std::endl;

  return 0;
}

