#include <iostream>
using std::cout;
using std::endl;

#include "Cube.h"
using uiuc::Cube;

template <typename T>
T max(T a, T b) {
  if (a > b) { return a; }
  return b;
}

int main() {
  cout << "max 3,5: " << max(3,5) << endl; 
  cout << "max a,d: " << max("a","d") << endl; 
  cout << "max HELLO,WORLD: " << max("HELLO","WORLD") << endl; 
  
  // not possible
  // cout << "max Cube(3),Cube(6): " << max(Cube(3),Cube(6)) << endl; 

  return 0;
}