#include <iostream>
#include "Kkki.h"
using namespace std;

int main() {
/*
  int a = 3;
  Vector A(1, 2), B(2, 3), C, P, K, Q;
  C = A + B;
  cout << "(" << C.get_x() << ":" << C.get_y() << ")" << "\tThis Vector C" << endl;

  P = A * a;
  cout << "(" << P.get_x() << ":" << P.get_y() << ")" << "\tThis Vector P" << endl;

  K = A - B;
  cout << "(" << K.get_x() << ":" << K.get_y() << ")" << "\tThis Vector K" << endl;

  int res;
  res = A * B;
  cout << res << endl;
*/
  Vector G(1, 1), R, W, Y, K, P, Z, M(1, 1);
  cout << "(" << M.get_x() << ":" << M.get_y() << ")" << "\tThis Vector M" << endl;
  cout << "(" << G.get_x() << ":" << G.get_y() << ")" << "\tThis Vector G" << endl;

  R = -G;
  cout << "(" << R.get_x() << ":" << R.get_y() << ")" << "\tThis Vector R (-)" << endl;

  W = +R;
  cout << "(" << W.get_x() << ":" << W.get_y() << ")" << "\tThis Vector W (+)" << endl;

  P = G++;
  cout << "(" << P.get_x() << ":" << P.get_y() << ")" << "\tThis Vector G (G++)" << endl;

  Y = ++G;
  cout << "(" << Y.get_x() << ":" << Y.get_y() << ")" << "\tThis Vector G (++G)" << endl;

  K = G--;
  cout << "(" << K.get_x() << ":" << K.get_y() << ")" << "\tThis Vector G (G--)" << endl;

  Z = --G;
  cout << "(" << Z.get_x() << ":" << Z.get_y() << ")" << "\tThis Vector G (--G)" << endl;

  M += G;
  cout << "(" << M.get_x() << ":" << M.get_y() << ")" << "\tThis Vector M (M+=)" << endl;

  M -= G;
  cout << "(" << M.get_x() << ":" << M.get_y() << ")" << "\tThis Vector M (M-=)" << endl;

  Vector J(1, 1), I(1, 2);
  cout << "(" << J.get_x() << ":" << J.get_y() << ")" << "\tThis Vector J" << endl;
  cout << "(" << I.get_x() << ":" << I.get_y() << ")" << "\tThis Vector I" << endl;

  int res = J *= I;
  cout << res << "\tThis result of J *= I" << endl;

  int k = 9;
  J *= k;
  cout << "(" << J.get_x() << ":" << J.get_y() << ")" << "\tThis Vector J (J *= k (k = 9))" << endl;

  if(G == M) {
    cout << "G == M" << endl;
  } else {
    cout << "Not equal" << endl;
  }

  if(G != J) {
    cout << "G != J" << endl;
  } else {
    cout << "STH" << endl;
  }

  if(G > J) {
    cout << "G > J" << endl;
  } else if(G < J) {
    cout << "G < J" << endl;
  }

  Vector T(1, 1), U(1, 1), X(2, 2);
  cout << "(" << T.get_x() << ":" << T.get_y() << ")" << "\tThis Vector T" << endl;
  cout << "(" << U.get_x() << ":" << U.get_y() << ")" << "\tThis Vector U" << endl;
  cout << "(" << X.get_x() << ":" << X.get_y() << ")" << "\tThis Vector X" << endl;
  if(T <= U && T < X) {
    cout << "T <= U && T < X" << endl;
  } else {
    cout << "STH" << endl;
  }

return 0;
}
