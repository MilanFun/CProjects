#include <iostream>
#include "Kkki.h"

Vector::Vector(double x, double y) {
  this -> x = x;
  this -> y = y;
}

Vector::Vector() {
  this -> x = 0;
  this -> y = 0;
}

double Vector::get_x() {
  return this -> x;
}

double Vector::get_y() {
  return this -> y;
}

Vector operator+(Vector& A, Vector& B) {
  return Vector(A.get_x() + B.get_x(), A.get_y() + B.get_y());
}

Vector operator-(Vector& A, Vector& B) {
  return Vector(A.get_x() - B.get_x(), A.get_y() - B.get_y());
}

Vector operator*(Vector& A, int a) {
  return Vector(A.get_x() * a, A.get_y() * a);
}

Vector operator*(int a, Vector& A) {
  return Vector(A.get_x() * a, A.get_y() * a);
}

int operator*(Vector& A, Vector& B) {
  return ((A.get_x() * B.get_x()) + (A.get_y() * B.get_y()));
}

Vector operator-(Vector& A) {
  return Vector(-A.get_x(), -A.get_y());
}

Vector operator+(Vector& A) {
  return Vector(+A.get_x(), +A.get_y());
}

Vector operator++(Vector& A) {
  return Vector(A.get_x() + 1, A.get_y() + 1);
}

Vector operator++(Vector& A, int a) {
  return Vector(A.get_x() + 1, A.get_y() + 1);
}

Vector operator--(Vector& A) {
  return Vector(A.get_x() - 1, A.get_y() - 1);
}

Vector operator--(Vector& A, int a) {
  return Vector(A.get_x() - 1, A.get_y() - 1);
}

Vector operator+=(Vector& A, Vector& B) {
  A = A + B;
  return A;
}

Vector operator-=(Vector& A, Vector& B) {
  A = A - B;
  return A;
}

int operator*=(Vector& A, Vector& B) {
  return A*B;
}

Vector operator*=(Vector& A, int a) {
  A = A * a;
  return A;
}

bool operator==(Vector& A, Vector& B) {
  if(A.get_x() == B.get_x() && A.get_y() == B.get_y()) {
    return true;
  } else {
    return false;
  }
}

bool operator!=(Vector& A, Vector& B) {
  if(A.get_x() != B.get_x() && A.get_y() != B.get_y()) {
    return true;
  } else {
    return false;
  }
}

double module(double a, double b) {
  return (a*a + b*b);
}

bool operator>(Vector& A, Vector& B) {
  double a1;
  double a2;
  a1 = module(A.get_x(), A.get_y());
  a2 = module(B.get_x(), B.get_y());
  if(a1 > a2) {
    return true;
  } else {
    return false;
  }
}

bool operator<(Vector& A, Vector& B) {
  double a1;
  double a2;
  a1 = module(A.get_x(), A.get_y());
  a2 = module(B.get_x(), B.get_y());
  if(a1 < a2) {
    return true;
  } else {
    return false;
  }
}

bool operator>=(Vector& A, Vector& B) {
  double a1;
  double a2;
  a1 = module(A.get_x(), A.get_y());
  a2 = module(B.get_x(), B.get_y());
  if(a1 >= a2) {
    return true;
  } else {
    return false;
  }
}

bool operator<=(Vector& A, Vector& B) {
  double a1;
  double a2;
  a1 = module(A.get_x(), A.get_y());
  a2 = module(B.get_x(), B.get_y());
  if(a1 >= a2) {
    return true;
  } else {
    return false;
  }
}
