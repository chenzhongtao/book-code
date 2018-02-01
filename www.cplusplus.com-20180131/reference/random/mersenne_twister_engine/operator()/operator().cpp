// mersenne_twister_engine::operator()
#include <iostream>
#include <chrono>
#include <random>

int main ()
{
  // obtain a seed from the system clock:
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

  std::mt19937 generator (seed);  // mt19937 is a standard mersenne_twister_engine
  std::cout << "Random value: " << generator() << std::endl;

  return 0;
}

