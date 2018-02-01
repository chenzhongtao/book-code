// binder2nd example
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main () {
  binder2nd < less<int> > IsNegative (less<int>(),0);
  int numbers[] = {10,-20,-30,40,-50};
  int cx;
  cx = count_if (numbers,numbers+5,IsNegative);
  cout << "There are " << cx << " negative elements.\n";
  return 0;
}

