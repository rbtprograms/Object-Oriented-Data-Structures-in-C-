#include <vector>
#include <iostream>

int main() {
  std::vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i * i);
  }

  std::cout << v[8] << std::endl;

  return 0;
}