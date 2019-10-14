#include "../Cube.h"
using uiuc::Cube;

bool sendCube(Cube c) {    
  // ... logic to send a Cube somewhere ...
  return true;
}

int main() {
  // Create a 1,000-valued cube
  Cube c(10);

  // transfer cube to someone
  sendCube(c); //pass by value so it needs to be copied to the function, so it will make another cube

  return 0;
}
