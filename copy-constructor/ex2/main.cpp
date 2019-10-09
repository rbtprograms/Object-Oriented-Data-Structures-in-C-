#include "../Cube.h"
using uiuc::Cube;

Cube foo() {
  Cube c; //default constructor
  return c; //copy constructor used because it is coming out of function
}

int main() {
  Cube c2 = foo(); //copy constructor
  return 0;
}