// cauchy_distribution::param
#include <iostream>
#include <random>

int main()
{
  std::default_random_engine generator;
  std::cauchy_distribution<double> d1(0.0,1.0);
  std::cauchy_distribution<double> d2(d1.param());

  // print two independent values:
  std::cout << d1(generator) << std::endl;
  std::cout << d2(generator) << std::endl;

  return 0;
}

