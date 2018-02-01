// time_get::get_time example
#include <iostream>       // std::cout, std::ios
#include <sstream>        // std::istringstream
#include <ctime>          // std::tm
#include <locale>         // std::locale, std::time_get, std::use_facet

int main ()
{
  std::locale loc;        // classic "C" locale

  // get time_get facet:
  const std::time_get<char>& tmget = std::use_facet <std::time_get<char> > (loc);

  std::ios::iostate state;
  std::istringstream iss ("07:30:00");
  std::tm when;

  tmget.get_time (iss, std::time_get<char>::iter_type(), iss, state, &when);

  std::cout << "hours: " << when.tm_hour << '\n';
  std::cout << "min: " << when.tm_min << '\n';
  std::cout << "sec: " << when.tm_sec << '\n';
  return 0;
}

