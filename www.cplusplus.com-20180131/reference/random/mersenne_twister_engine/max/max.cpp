// mersenne_twister_engine::min and max
#include <iostream>
#include <chrono>
#include <random>

int main ()
{
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::mt19937 generator (seed);  // mt19937 is a standard mersenne_twister_engine

  std::cout << generator() << " is a random number between ";
  std::cout << generator.min() << " and " << generator.max();

  return 0;
}

