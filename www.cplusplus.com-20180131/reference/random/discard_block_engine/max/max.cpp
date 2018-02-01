// discard_block_engine::min and max
#include <iostream>
#include <chrono>
#include <random>

int main ()
{
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

  // ranlux24 is a standard instantitation of discard_block_engine:
  std::ranlux24 generator (seed);

  std::cout << generator() << " is a random number between ";
  std::cout << generator.min() << " and " << generator.max();

  return 0;
}

