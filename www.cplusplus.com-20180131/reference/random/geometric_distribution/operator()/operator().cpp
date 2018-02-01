// geometric_distribution example
#include <iostream>
#include <chrono>
#include <string>
#include <random>

int main()
{
  // construct a trivial random generator engine from a time-based seed:
  int seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::default_random_engine generator (seed);

  std::geometric_distribution<int> distribution (1.0/5);

  std::cout << "each star is 5 spaces away from the next (on average):" << std::endl;
  for (int i=0; i<100; ++i) {
    int number = distribution(generator);
    std::cout << std::string (number,' ') << "*";
  }

  return 0;
}
