#pragma once

namespace uiuc {
  class Cube {
    public:
      Cube(); // Custom default constructor
      Cube(double length); //single arguement constructor
      double getVolume();
      double getSurfaceArea();
      void setLength(double length);

    private:
      double length_;
  };
}