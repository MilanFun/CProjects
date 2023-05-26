#include <iostream>
#include "Head.h"

int main() {
  Point2D A;
  Point2D B(3,4);
  A.stream2();
  B.stream2();

  B.set_xy(3, 4);
  B.stream2();
  std::cout << std::endl;

  Point3D C(3, 3, 2);
  C.stream3();
return 0;
}
