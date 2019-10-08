#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *x;
  int size = 3;
  //create an array of size 3 on the heap
  x = new int[size];

  for (int i = 0; i < size; i++) {
    x[i] = i + 3; // 3 4 5
  }

  //must delete[] when removing arrays from the heap
  delete[] x;
}
