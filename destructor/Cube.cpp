#include "Cube.h"
#include <iostream>

namespace uiuc {  
  Cube::Cube() {
    length_ = 1;
    std::cout << "Created $1 (default)" << std::endl;
  }
  //custom constructor
  Cube::Cube(double length) {
    length_ = length;
    std::cout << "Created $" << getVolume() << std::endl;
  }

  //copy constructor
  Cube::Cube(const Cube &obj) {
    length_ = obj.length_;
    std::cout << "Created $" << getVolume() << " via copy" << std::endl;
  }

  //custom operator assignment
  Cube &Cube::operator=(const Cube & obj) {
    std::cout << "Transformed $" << getVolume() << "-> $" << obj.getVolume() << std::endl;
    length_ = obj.length_;
    return *this;
  }

  Cube::~Cube() {
    std::cout << "Destroyed $" << getVolume() << std::endl;
  }

  double Cube::getVolume() const {
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() const {
    return 6 * length_ * length_;
  }

  void Cube::setLength(double length) {
    length_ = length;
  }
}
