// make_move_iterator example
#include <iostream>     // std::cout
#include <iterator>     // std::make_move_iterator
#include <vector>       // std::vector
#include <string>       // std::string
#include <algorithm>    // std::copy

int main () {
  std::vector<std::string> foo (3);
  std::vector<std::string> bar {"one","two","three"};

  std::copy ( make_move_iterator(bar.begin()),
              make_move_iterator(bar.end()),
              foo.begin() );

  // bar now contains unspecified values; clear it:
  bar.clear();

  std::cout << "foo:";
  for (std::string& x : foo) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}

