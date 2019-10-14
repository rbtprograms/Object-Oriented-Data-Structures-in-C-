#include "Cube.h"
using uiuc::Cube;

double cube_on_stack() {
  Cube c(3);
  return c.getVolume();
}

void cube_on_heap() {
  Cube *c1 = new Cube(10);
  Cube *c2 = new Cube;
  delete c1;
}

int main() {
  cube_on_stack(); //create a cube on the stack, then destroy is as soona s function is done because we do nothing with it
  cube_on_heap();  //create two new cubes on heap, then destroy one, second one still sticks around because it is on the heap
  cube_on_stack(); //create a cobe on stacka nd immedeatly destroy it
  return 0;
}