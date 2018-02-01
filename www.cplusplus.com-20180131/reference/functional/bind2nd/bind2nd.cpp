// bind2nd example
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main () {
  int numbers[] = {10,-20,-30,40,-50};
  int cx;
  cx = count_if ( numbers, numbers+5, bind2nd(less<int>(),0) );
  cout << "There are " << cx << " negative elements.\n";
  return 0;
}

