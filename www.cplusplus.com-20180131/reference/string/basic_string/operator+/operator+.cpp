// concatenating strings
#include <iostream>
#include <string>

main ()
{
  std::string firstlevel ("com");
  std::string secondlevel ("cplusplus");
  std::string scheme ("http://");
  std::string hostname;
  std::string url;

  hostname = "www." + secondlevel + '.' + firstlevel;
  url = scheme + hostname;

  std::cout << url << '\n';

  return 0;
}

