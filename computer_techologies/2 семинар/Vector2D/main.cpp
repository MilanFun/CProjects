#include <iostream>
#include "vector.h"
using namespace std;

int main() {
/*
  double a = 2;
  cout << "This is double a = " <<a << endl;
  Vector A(3,5);
  cout << "(" << A.get_x() << ":" << A.get_y() << ")" << "\tThis Vector A" << endl;
  Vector B(6, 5);
  cout << "(" << B.get_x() << ":" << B.get_y() << ")" << "\tThis Vector B" <<endl;
  Vector C;

  C = A.plus(B);
  cout << "(" << C.get_x() << ":" << C.get_y() << ")" << "\tThis function vector plus of A and B" <<endl;

  C = A.minus(B);
  cout << "(" << C.get_x() << ":" << C.get_y() << ")" << "\tThis function vector minus of A and B" <<endl;

  A = A.mul(a);
  cout << "(" << A.get_x() << ":" << A.get_y() << ")" << "\tThis function vector mul on double a" <<endl;

  Vector *O = new Vector();
  cout << "(" << O->get_x() << ":" << O->get_y() << ")" << endl;
  cout << "--------------------------------------------------------------" << endl;
*/
/*---------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------*/

  double o = 3;
  double I;
  cout << "This is double o = " << o << endl;
  Vector P;
  cout << "(" << P.get_x() << ":" << P.get_y() << ")" << "\tThis Vector P" << endl;
  Vector L(1,2);
  cout << "(" << L.get_x() << ":" << L.get_y() << ")" << "\tThis Vector L" << endl;
  Vector K(2,3);
  cout << "(" << K.get_x() << ":" << K.get_y() << ")" << "\tThis Vector K" << endl;

  P = L + K;
  cout << "(" << P.get_x() << ":" << P.get_y() << ")" << "\tThis Vector P of result operator+ for L and K" <<endl;

  P = L - K;
  cout << "(" << P.get_x() << ":" << P.get_y() << ")" << "\tThis Vector P of result operator- for L and K" <<endl;

  P = L * o;
  cout << "(" << P.get_x() << ":" << P.get_y() << ")" << "\tThis Vector P of result operator* on double o" <<endl;

  I = K*L;
  cout << "I = " << I << "\tThis I is result of multiple of vector L and K" << endl;

  return 0;
}
