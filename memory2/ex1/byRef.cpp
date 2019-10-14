#include "../Cube.h"
using uiuc::Cube;

int main() {
  //create a 1000 value cube
   Cube c(10); //custom constructor

   //Transfer the cube
   Cube &myCube = c; //custom assignment constructor, wont make more cubes

   return 0;
}