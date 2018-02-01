// front_insert_iterator example
#include <iostream>     // std::cout
#include <iterator>     // std::front_insert_iterator
#include <deque>        // std::deque
#include <algorithm>    // std::copy

int main () {
  std::deque<int> foo, bar;
  for (int i=1; i<=5; i++)
  { foo.push_back(i); bar.push_back(i*10); }

  std::front_insert_iterator< std::deque<int> > front_it (foo);

  std::copy (bar.begin(),bar.end(),front_it);

  std::cout << "foo:";
  for ( std::deque<int>::iterator it = foo.begin(); it!= foo.end(); ++it )
	  std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}

