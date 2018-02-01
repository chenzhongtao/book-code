// bad_function_call example
#include <iostream>     // std::cout
#include <functional>   // std::function, std::plus, std::bad_function_call

int main () {
  std::function<int(int,int)> foo = std::plus<int>();
  std::function<int(int,int)> bar;

  try {
    std::cout << foo(10,20) << '\n';
    std::cout << bar(10,20) << '\n';
  }
  catch (std::bad_function_call& e)
  {
    std::cout << "ERROR: Bad function call\n";
  }

  return 0;
}

