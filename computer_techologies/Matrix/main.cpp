#include "Matrix.h"

int main() {
  Matrix<int> A(2,2);
  A.input();
  A.transpose();
  A.output();
return 0;
}
