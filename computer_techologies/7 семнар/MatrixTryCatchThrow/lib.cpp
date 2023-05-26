#include "Matrix.h"
#include <iostream>

Matrix::Matrix(int n, int m) {
  this -> n = n;
  this -> m = m;
  this -> size = n * m;

  data = new int[this -> size];

  for(int i = 0; i < this -> size; i++) {
    std::cin >> data[i];
  }
  std::cout << std::endl;
}

void Matrix::delMatr() {
  delete[] data;
}

void Matrix::PrintMatrix() {
  for(int i = 0, k = 0; i < m; i++) {
    for(int j = 0; j < n; j++ , k++) {
      std::cout << data[k] << " ";
    }
    std::cout << std::endl;
  }
}

int Matrix::Determinate() {
  try {
    if(this -> m != this -> n) {
      throw "Determinate only for squared Matrix";
    }
  }
  catch(const char* msg) {
    std::cout << msg << std::endl;
  }
}
