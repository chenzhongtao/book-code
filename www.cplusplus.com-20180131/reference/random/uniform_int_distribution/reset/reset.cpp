// uniform_int_distribution::reset
#include <iostream>
#include <random>

int main()
{
  std::default_random_engine generator;
  std::uniform_int_distribution<int> distribution(1,1000);

  // print two independent values:
  std::cout << distribution(generator) << std::endl;
  distribution.reset();
  std::cout << distribution(generator) << std::endl;

  return 0;
}

