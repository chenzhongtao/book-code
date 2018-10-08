// error_code::operator<<
#include <iostream>       // std::cout, std::ios
#include <system_error>   // std::system_error
#include <fstream>        // std::ifstream

int main()
{
  std::ifstream is;
  is.exceptions (std::ios::failbit);
  try {
    is.open ("unexistent.txt");
  } catch (const std::system_error& e) {
    std::cout << "Exception caught:\n";
    std::cout << e.code() << " = " << e.what() << '\n';
  }
}

