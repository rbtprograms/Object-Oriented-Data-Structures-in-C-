#include "Cube.h"
#include "Shape.h"

namespace uiuc {
  //                                              Initialize Shape class
  Cube::Cube(double width, uiuc::HSLAPixel color): Shape(width) {
    color_ = color;
  }

  double Cube::getVolume() const {
    // Cannot access Shape::width_ due to it being `private`
    // ...instead we use the public Shape::getWidth(), a public function

    return getWidth() * getWidth() * getWidth();
  }
}