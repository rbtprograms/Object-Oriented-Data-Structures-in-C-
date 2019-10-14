#include "Game.h"
#include <iostream>

int main() {
  Game g;

  std::cout << "Initial Game State: " << std::endl;
  std::cout << g << std::endl;

  g.solve();

  std::cout << "Final Game State: " << std::endl;
  std::cout << g << std::endl;

  return 0;
}