#include "Cube.h"
using uiuc::Cube;

int main() {
  Cube c; //default constructor
  Cube myCube; //defult

  myCube = c; //assignment operator
  //constrcutor only create objects, if they already exist they dont trigger

  return 0;
}