#include <iostream>
#include "Matrix.h"
using namespace std;

void Print() {
  cout << "--------------------------------------------------------------" << endl;
  cout << "Инструкция использования калькулятора для операций с матрицами" << endl;
  cout << "Введите одну из слудеющих цифр" << endl;
  cout << "\t1 - Умножение числа на матрицу" << endl;
  cout << "\t2 - Сложение двух матриц" << endl;
  cout << "\t3 - Вычетание двух матриц" << endl;
  cout << "\t4 - Умножение матриц A и B " << endl;
  cout << "\t5 - Транспонирование матрицы А" << endl;
  cout << "\t6 - Умножение матрицы на вектор" << endl;
  cout << "\t7 - Выход из программы" << endl;
  cout << "--------------------------------------------------------------" << endl;
}

void printVec(int* a) {
    cout << "(" << a[0] << ":" << a[1] << ")" << endl;
    cout << endl;
}

int main() {
  Print();

  int operation, a = 0;
  cin >> operation;

  while(a == 0) {
      if(operation == 1) {
        int l;
        cout << "Введите целое цисло: ";
        cin >> l;
        cout << "Введите элементы матрицы A(2х2)" << endl;
        Matrix A(1);
        Matrix E(0);
        E = A * l;
        cout << "Итог умножения матрицы A на число: " << endl;
        E.PrintMatrix();
        cout << "--------------------------------------------------------------" << endl;
        Print();
        cin >> operation;
      } else if(operation == 2) {
          cout << "Введите элементы матрицы A(2х2)" << endl;
          Matrix B(1);
          cout << "Введите элементы матрицы B(2х2)" << endl;
          Matrix C(1);
          Matrix D(0);
          D = B + C;
          cout << "Итог сложения матриц A и B" << endl;
          D.PrintMatrix();
          cout << "--------------------------------------------------------------" << endl;
          Print();
          cin >> operation;
      } else if(operation == 3) {
          cout << "Введите элементы матрицы A(2х2)" << endl;
          Matrix F(1);
          cout << "Введите элементы матрицы B(2х2)" << endl;
          Matrix G(1);
          Matrix H(0);
          H = F - G;
          cout << "Итог вычетания матриц A и B" << endl;
          H.PrintMatrix();
          cout << "--------------------------------------------------------------" << endl;
          Print();
          cin >> operation;
      } else if(operation == 4) {
          cout << "Введите элементы матрицы A(2х2)" << endl;
          Matrix I(1);
          cout << "Введите элементы матрицы B(2х2)" << endl;
          Matrix J(1);
          Matrix K(0);
          K = I * J;
          cout << "Итог умножения матриц A и B" << endl;
          K.PrintMatrix();
          cout << "--------------------------------------------------------------" << endl;
          Print();
          cin >> operation;
      } else if(operation == 5) {
          cout << "Введите элементы матрицы A(2х2)" << endl;
          Matrix Y(1);
          Matrix C(0);
          C = Y.trans();
          cout << "Итог транспонирования матрицы А" << endl;
          C.PrintMatrix();
          cout << "--------------------------------------------------------------" << endl;
          Print();
          cin >> operation;
      } else if(operation == 6) {
          cout << "Введите элементы матрицы A(2х2)" << endl;
          Matrix M(1);
          cout << "Введите координаты вектора" << endl;
          int *res;
          int *res1;
          res1 = new int[2];
          res = new int[2];
          for(int i = 0; i < 2; i++) {
            cin >> res[i];
          }
          res1 = M * res;
          cout << endl;
          printVec(res1);
          cout << "--------------------------------------------------------------" << endl;
          Print();
          cin >> operation;
      } else if(operation == 7) {
          a++;
      }
    }
return 0;
}
