#include <iostream>

int main() {
  int values[10] = { 1,2,3,4,5,6,7,8,9,10 };

  std::cout << sizeof(int) << std::endl;

  int offset = (long)&(values[2]) - (long)&(values[0]);
  std::cout << offset << std::endl;

  return 0;
}