#pragma once

namespace uiuc {
  class Cube {
    public:
      Cube();
      Cube(double length);  // One argument constructor
      Cube(const Cube &obj);  // Custom copy constructor
      ~Cube(); //customer destructor

      Cube &operator=(const Cube &obj);  // Custom assignment operator

      double getVolume() const;
      double getSurfaceArea() const;
      void setLength(double length);

    private:
      double length_;
  };
}
