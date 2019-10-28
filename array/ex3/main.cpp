#include <iostream>
#include "../Cube.h"

using uiuc::Cube;

int main() {
  Cube cubes[3] = { Cube(11), Cube(42), Cube(400) };

  std::cout << sizeof(Cube) << std::endl;

  int offset = (long)&(cubes[2]) - (long)&(cubes[0]);
  std::cout << offset << std::endl;

  return 0;
}