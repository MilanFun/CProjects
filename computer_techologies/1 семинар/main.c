#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  double a, b;
  scanf("%le %le", &a, &b);
  double s = sum(a, b);
  double d = divvv(a, b);

  printf("%f %f", s, d);
return 0;
}
