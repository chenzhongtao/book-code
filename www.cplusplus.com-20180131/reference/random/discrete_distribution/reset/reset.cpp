// discrete_distribution::reset
#include <iostream>
#include <random>

int main()
{
  std::default_random_engine generator;
  std::discrete_distribution<int> distribution {10,20,30,40};

  // print two independent values:
  std::cout << distribution(generator) << std::endl;
  distribution.reset();
  std::cout << distribution(generator) << std::endl;

  return 0;
}

