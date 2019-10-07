#include <iostream>
#include "Cube.h"

int main() {
  Cube c;

  c.setLength(4);
  double volume = c.getVolume();
  double surface = c.getSurfaceArea();
  std::cout << "Volume: " << volume << " Surface Area: " << surface << std::endl;

  return 0;
}