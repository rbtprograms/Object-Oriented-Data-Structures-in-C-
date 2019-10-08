#include "Cube.h";
using uiuc::Cube;

int main() {
  int *p = new int;
  Cube *c = new Cube;

  *p = 42;

  //arrow dereferences classes when they are pointers to use their methods
  c->setLength(4);

  // use delete keyword to remove from heap
  delete c;
  c = nullptr;
  delete p;
  p = nullptr;
  return 0;
}