#include <iostream>
#include <cmath>
#include "Complex.h"

int main() {
  Complex A;
  Complex C(3,3);

  std::cout << "This is A = " << A << std::endl;
  std::cout << "This is C = " << C << std::endl;

  std::cout << "This is abs of C: " <<C.abs() << std::endl;
  A = C;
  std::cout << "operator =  with C ====> " << A << std::endl;
  A += C;
  std::cout << "operator += with C ====> " << A << std::endl;

  Complex I(5,5);
  std::cout << "This is I = " << I << std::endl;

  I -= C;
  std::cout << "operator -= with C ====> " << I << std::endl;

  Complex Y;
  std::cout << "This is Y = " << Y << std::endl;

  Y = A+C;
  std::cout << "operator + with A and C ====> " << Y << std::endl;

  Y = A-C;
  std::cout << "operator - with A and C ====> " << Y << std::endl;

  Complex N;

  N = A*C;
  std::cout << "operator * with A and C ====> " << N << std::endl;

  Complex T;
  T = A/C;
  std::cout << "operator / with A and C ====> " << T << std::endl;

  Complex E, R, p;
  p = E / R;
  return 0;
}
