// future_error::code example:
#include <iostream>     // std::cout
#include <future>       // std::promise, std::future_error
#include <string>       // operator<<(ostream&,const string&)

int main ()
{
  std::promise<int> prom;

  try {
    prom.get_future();
    prom.get_future();   // throws std::future_error
  }
  catch (std::future_error& e) {
    std::cout << "future_error caught: " << e.code().message() << '\n';
  }

  return 0;
}

