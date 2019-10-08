#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *x = new int;
  int &y = *x;
  y = 4;

  cout << &x << endl; //location on the stack
  cout << x << endl;  //location on the heap
  cout << *x << endl; //value in memory: 4

  cout << &y << endl; //location on the heap
  cout << y << endl;  //value in memory: 4
  // cout << *y << endl;  //cannot dereference a non-pointer

  return 0;
}
