#include <iostream>
#include "Time.h"
using namespace std;

int main() {
  Time A(2, 2, 2, 2);
  Time B;
  B = -A;
  cout << B << endl;
return 0;
}
