#include "Game.h"
#include "Stack.h"
#include "uiuc/Cube.h"
#include "uiuc/HSLAPixel.h"

#include <iostream>
using std::cout;
using std::endl;
using std::vector;

void Game::solve() {
  // Prints out the state of the game:
  cout << *this << endl;

  // @TODO -- Finish solving the game!
  move(4, stacks_[0], stacks_[2], stacks_[1]);
}

void Game::moveCube(Stack &s1, Stack &s2) {
  Cube c = s1.removeTop();
  s2.push_back(c);
}

void Game::move(int n, Stack &source, Stack &target, Stack &auxillary) {
  if (n > 0) {
    // move disks off of start and onto auxillary
    move(n-1, source, auxillary, target);

    //move cube
    moveCube(source, target);

    // move the cube off auxillary and onto our target
    move(n-1, auxillary, target, source);
  }
}

Game::Game() {
  //create stacks
  for (int i = 0; i < 3; i++) {
    Stack stackOfCubes;
    stacks_.push_back(stackOfCubes);
  }

  //Create the four cubes
  Cube blue(4, uiuc::HSLAPixel::BLUE);
  stacks_[0].push_back(blue);

  Cube orange(3, uiuc::HSLAPixel::ORANGE);
  stacks_[0].push_back(orange);
  
  Cube purple(2, uiuc::HSLAPixel::PURPLE);
  stacks_[0].push_back(purple);

  Cube yellow(1, uiuc::HSLAPixel::YELLOW);
  stacks_[0].push_back(yellow);
}

std::ostream& operator<<(std::ostream & os, const Game & game) {
  for (unsigned i = 0; i < game.stacks_.size(); i++) {
    os << "Stack[" << i << "]: " << game.stacks_[i];
  }
  return os;
}
