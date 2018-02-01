// type_index example
#include <iostream>       // std::cout
#include <typeinfo>       // operator typeid
#include <typeindex>      // std::type_index
#include <unordered_map>  // std::unordered_map
#include <string>         // std::string

struct C {};

int main()
{
  std::unordered_map<std::type_index,std::string> mytypes;

  mytypes[typeid(int)]="Integer type";
  mytypes[typeid(double)]="Floating-point type";
  mytypes[typeid(C)]="Custom class named C";

  std::cout << "int: " << mytypes[typeid(int)] << '\n';
  std::cout << "double: " << mytypes[typeid(double)] << '\n';
  std::cout << "C: " << mytypes[typeid(C)] << '\n';

  return 0;
}

