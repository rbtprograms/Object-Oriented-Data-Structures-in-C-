#pragma once

namespace uiuc {
  class Cube {
    public:
      Cube(double length);  // One argument constructor

      double getVolume() const;
      double getSurfaceArea() const;
      void setLength(double length);

      bool operator==(const Cube & other);

    private:
      double length_;
  };
}
