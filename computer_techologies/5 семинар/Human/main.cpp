#include "Human.h"
#include <string>
#include <iostream>

int main() {
  Student A(20, "Alex", 20);
  A.get_ANS();
  A.get_AN();

  Teacher M(25, "Max", 100000);
  M.get_ANJ();

  std::cout << std::endl;

  A.set_ANS(10);
  M.set_ANJ(1000);
  A.get_ANS();
  M.get_ANJ();
return 0;
}
