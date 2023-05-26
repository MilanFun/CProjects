#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix(int a) {
  if(a == 1) {
    //выделение памяти для матрицы
    data = new int*[2];
    for(int i = 0; i < 2; i++) {
        data[i] = new int[2];
      }
      //заполнение матрицы элементами
      for(int z = 0; z < 2; z++) {
        for(int j = 0; j < 2; j++) {
          cin >> data[z][j];
        }
      }
    }

  if (a == 0) {
    //выделение памяти для матрицы
    data = new int*[2];
    for(int i = 0; i < 2; i++) {
        data[i] = new int[2];
      }
    //обнуление матрицы
    for(int z = 0; z < 2; z++) {
      for(int j = 0; j < 2; j++) {
        data[z][j] = 0;
      }
    }
  }
}

void Matrix::outStream() {
  for(int i = 0; i < 2; i++) {
    cout << "|";
    for(int j = 0; j< 2; j++) {
      cout << data[i][j];
      if(j == 0) {
        cout.width(4);
      }
    }
    cout << "|" << endl;
  }
  cout << endl;
}

void Matrix::null() {
  for(int z = 0; z < 2; z++) {
    for(int j = 0; j < 2; j++) {
      data[z][j] = 0;
    }
  }
}

void Matrix::trans() {
  for (int i = 0; i < 2; i++) {
      for (int j = 0; j < i; j++) {
          int tmp = data[i][j];
          data[i][j] = data[j][i];
          data[j][i] = tmp;
      }
  }
}

Matrix Matrix::operator+(Matrix A) {
  Matrix C(0);
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      C.data[i][j] = data[i][j] + A.data[i][j];
    }
  }
return C;
}

Matrix Matrix::operator-(Matrix A) {
  Matrix C(0);
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      C.data[i][j] = data[i][j] - A.data[i][j];
    }
  }
return C;
}

Matrix Matrix::operator*(int a) {
  Matrix C(0);
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      C.data[i][j] = a * data[i][j];
    }
  }
return C;
}

Matrix Matrix::operator*(Matrix A) {
  Matrix C(0);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        C.data[i][j] += data[i][k] * A.data[k][j];
      }
    }
  }
return C;
}

Vector::Vector() {
  this -> x = 0;
  this -> y = 0;
}

Vector::Vector(double x, double y) {
  this -> x = x;
  this -> y = y;
}

double Vector::get_x() {
  return this -> x;
}

double Vector::get_y() {
  return this -> y;
}

Vector Vector::operator*(Matrix A) {
  double a = this -> x;
  double b = this -> y;
  return Vector(A.data[0][0] * a + A.data[0][1] * b,
                A.data[1][0] * a + A.data[1][1] * b);
}
