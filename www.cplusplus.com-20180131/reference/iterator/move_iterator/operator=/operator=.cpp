// move_iterator::operator= example
#include <iostream>     // std::cout
#include <iterator>     // std::move_iterator
#include <vector>       // std::vector
#include <string>       // std::string
#include <algorithm>    // std::copy

int main () {
  std::vector<std::string> foo (3);
  std::vector<std::string> bar {"one","two","three"};

  std::move_iterator<std::vector<std::string>::iterator> from,until;

  // move_iterator assignments:
  from = bar.begin();
  until = bar.end();

  std::copy ( from, until, foo.begin() );

  // bar contains unspecified values; clear it:
  bar.clear();

  std::cout << "foo:";
  for (std::string& x : foo) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}

