// shuffle_order_engine::discard
#include <iostream>
#include <chrono>
#include <random>

int main ()
{
  // obtain a seed from the system clock:
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

  // knuth_b is a standard shuffle_order_engine type:
  std::knuth_b generator (seed);

  std::cout << "Random value: " << generator() << std::endl;

  generator.discard(generator.table_size);

  std::cout << "Random value: " << generator() << std::endl;

  return 0;
}
