#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix(int a) {
  data = new int[4];
  if(a == 1) {
    for(int i = 0; i < 4; i++) {
      cin >> data[i];
    }
  } else {
    for(int i = 0; i < 4; i++) {
      data[i] = 0;
    }
  }
  cout << endl;
}

void Matrix::delMatr() {
  for(int i = 0; i < 4; i++) {
      data[i] = 0;
  }
  delete data;
}

void Matrix::PrintMatrix() {
  for(int i = 0; i < 2; i++) {
    cout << data[i] << " ";
  }
  cout << endl;
  for(int k = 2; k < 4; k++) {
    cout << data[k] << " ";
  }
  cout << endl;
  cout << endl;
}

Matrix Matrix::operator+(Matrix A) {
  Matrix C(0);
  for(int i = 0; i < 4; i++) {
    C.data[i] = data[i] + A.data[i];
  }
return C;
}

Matrix Matrix::operator-(Matrix A) {
  Matrix C(0);
  for(int i = 0; i < 4; i++) {
    C.data[i] = data[i] - A.data[i];
  }
return C;
}

Matrix Matrix::operator*(int a) {
  Matrix C(0);
  for(int i = 0; i < 4; i++) {
    C.data[i] = a * data[i];
  }
return C;
}
//по другому я не смог сделать
Matrix Matrix::operator*(Matrix A) {
  Matrix C(0);
  C.data[0] = data[0] * A.data[0] + data[1] * A.data[2];
  C.data[1] = data[0] * A.data[1] + data[1] * A.data[3];
  C.data[2] = data[2] * A.data[0] + data[3] * A.data[2];
  C.data[3] = data[2] * A.data[1] + data[3] * A.data[3];
return C;
}
//По другому я не смог сделать
Matrix Matrix::trans() {
  Matrix C(0);
  C.data[0] = data[0];
  C.data[1] = data[2];
  C.data[2] = data[1];
  C.data[3] = data[3];
return C;
}

int* Matrix::operator*(int* a) {
  int *res;
  res = new int[2];
  res[0] = data[0] * a[0] + data[1] * a[1];
  res[1] = data[2] * a[0] + data[3] * a[1];
return res;
}
