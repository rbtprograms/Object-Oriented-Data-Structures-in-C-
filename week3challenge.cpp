/* Class Pair has already been declared
 * as shown in the following comments:
 *
 
 * Implement its member functions below.
 */
#include<iostream>

class Pair {
public:
  int *pa,*pb;
  Pair(int, int);
  Pair(const Pair &);
  ~Pair();
};
Pair::Pair(int a, int b) {
  std::cout << "single constructor ran" << std::endl;
  pa = new int(a);
  pb = new int(b);
}
Pair::Pair(const Pair &other) {
  std::cout << "copy constructor ran" << std::endl;
  pa = new int(*other.pa);
  pb = new int(*other.pb);
}
Pair::~Pair() {
  std::cout << "deleting things" << std::endl;
  delete pa;
  delete pb;
}

 
 
 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */
  
int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  delete hp;
  
  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}