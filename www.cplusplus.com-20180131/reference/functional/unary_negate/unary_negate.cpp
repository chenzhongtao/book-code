// unary_negate example
#include <iostream>     // std::cout
#include <functional>   // std::unary_negate
#include <algorithm>    // std::count_if

struct IsOdd_class {
  bool operator() (const int& x) const {return x%2==1;}
  typedef int argument_type;
} IsOdd_object;

int main () {
  std::unary_negate<IsOdd_class> IsEven_object (IsOdd_object);
  int values[] = {1,2,3,4,5};
  int cx;
  cx = std::count_if ( values, values+5, IsEven_object );
  std::cout << "There are " << cx << " elements with even values.\n";
  return 0;
}

