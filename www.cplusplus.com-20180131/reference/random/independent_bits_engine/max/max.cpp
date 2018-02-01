// independent_bits_engine::min and max
#include <iostream>
#include <chrono>
#include <cstdint>
#include <random>

int main ()
{
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

  std::independent_bits_engine<std::mt19937,64,std::uint_fast64_t> generator (seed);

  std::cout << generator() << " is a random number between ";
  std::cout << generator.min() << " and " << generator.max();

  return 0;
}

