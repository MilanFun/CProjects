#include <iostream>

double del(int a, int b) {
  if(b == 0) {
   throw "Delenie na nol!";
  }

  return a / b;
}

int main() {
  int x = 500;
  int y = 0;

  try {
    double z = del(x, y);
    std::cout << z << std::endl;
  }

  catch (const char* msg) {
    std::cout << msg << std::endl;
  }

return 0;
}
