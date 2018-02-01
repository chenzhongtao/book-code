// get_time example
#include <iostream>     // std::cin, std::cout
#include <iomanip>      // std::get_time
#include <ctime>        // struct std::tm

int main ()
{
  struct std::tm when;
  std::cout << "Please, enter the time: ";
  std::cin >> std::get_time(&when,"%R");   // extract time (24H format)

  if (std::cin.fail()) std::cout << "Error reading time\n";
  else {
    std::cout << "The time entered is: ";
    std::cout << when.tm_hour << " hours and " << when.tm_min << " minutes\n";
  }

  return 0;
}

