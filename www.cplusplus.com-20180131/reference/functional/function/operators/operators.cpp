// function comparisons vs nullptr
#include <iostream>     // std::cout
#include <functional>   // std::function, std::plus

int main () {
  std::function<int(int,int)> foo = std::plus<int>();
  std::function<int(int,int)> bar;

  std::cout << "foo is " << (foo==nullptr ? "not callable" : "callable") << ".\n";
  std::cout << "bar is " << (bar==nullptr ? "not callable" : "callable") << ".\n";

  return 0;
}

