#include <iostream>
#include "Cube.h"

using std::cout;
using std::endl;

int main() {
  uiuc::Cube c;
  c.setLength(2.4);
  cout << "Volume: " << c.getVolume() << endl;
  return 0;
}