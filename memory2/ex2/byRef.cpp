#include "../Cube.h"
using uiuc::Cube;

//recieve reference
bool sendCube(Cube &c) {    
  // ... logic to send a Cube somewhere ...
  return true;
}

int main() {
  // Create a 1,000-valued cube
  Cube c(10);

  // transfer cube to someone
  sendCube(c); //pass by reference, so it is just an alias and does not meed to be copied

  return 0;
}
