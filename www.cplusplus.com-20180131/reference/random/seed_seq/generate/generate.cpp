// seed_seq::generate
#include <iostream>
#include <random>
#include <array>

int main ()
{
  std::seed_seq seed = {102,406,7892};

  std::cout << "generating a sequence of 5 elements:" << std::endl;
  std::array<unsigned,5> sequence;
  seed.generate(sequence.begin(),sequence.end());
  for (unsigned x:sequence) {std::cout << x << std::endl;}

  return 0;
}

