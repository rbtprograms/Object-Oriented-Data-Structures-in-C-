#include "Shape.h"

// Initializes with the one param constructor when default is called
Shape::Shape(): Shape(1) {
  // Nothing.
}

//initializes our params at creation instead of in code
Shape::Shape(double width): width_(width) {
  // Nothing.
}

double Shape::getWidth() const {
  return width_;
}
