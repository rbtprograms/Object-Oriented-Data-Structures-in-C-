#pragma once

#include "Stack.h"
#include <vector>

class Game {
  public:
    Game();
    void solve();
    void solve2();

    friend std::ostream&operator<<(std::ostream &os, const Game &game);

  private:
    std::vector<Stack> stacks_;
    void moveCube(Stack & s1, Stack & s2);
    void move(int n, Stack & source, Stack & target, Stack & spare);
    void legalMove(Stack &firstIndex, Stack &secondIndex);
};