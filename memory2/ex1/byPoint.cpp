#include "../Cube.h"
using uiuc::Cube;

int main() {
  //create a 1000 value cube
   Cube c(10); //custom constructor

   //Transfer the cube
   Cube *myCube = &c; //should only create 1 cube since it is a pointer to a reference

   return 0;
}