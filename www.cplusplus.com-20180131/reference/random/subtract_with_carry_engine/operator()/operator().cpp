// subtract_with_carry::operator()
#include <iostream>
#include <chrono>
#include <random>

int main ()
{
  // obtain a seed from the system clock:
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

  std::subtract_with_carry_engine<unsigned,24,10,24> generator (seed);
  std::cout << "Random value: " << generator() << std::endl;

  return 0;
}

