// pointer_to_binary_function example
#include <iostream>
#include <functional>
#include <algorithm>
#include <cmath>
using namespace std;

int main () {
  pointer_to_binary_function <double,double,double> PowObject (pow);
  double numbers[] = {1.0, 2.0, 3.0, 4.0, 5.0};
  double squares[5];
  transform (numbers, numbers+5, squares, bind2nd(PowObject,2) );
  for (int i=0; i<5; i++)
    cout << squares[i] << " ";
  cout << endl;
  return 0;
}


