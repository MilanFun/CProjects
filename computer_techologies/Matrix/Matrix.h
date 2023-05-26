#pragma once

#ifndef MATR_H
#define MATR_H

#include <iomanip>
#include <iostream>
#include <cmath>

template<typename T>
class Matrix {
protected:
  T *data;
  int col; //столбец
  int row; //строка

public:
  Matrix(int, int);
  Matrix(const Matrix<T>&);
  ~Matrix();

  int get_col() const;
  int get_row() const;
  T getElem(int, int);
  void setElem(int, int, T);

  void input() const;
  void output() const;

  void transpose();
  void operator=(const Matrix&);
  Matrix<T> operator+(Matrix&);
  Matrix<T> operator-(Matrix&);
  Matrix<T> operator*(int);
  Matrix<T> operator*(Matrix&);

};

template<typename T>
class Vector : public Matrix<T> {
public:
  Vector(int col) : Matrix<T>(1, col) {};

  double norm() const;

  void operator=(const Vector&);
  Vector<T> operator*(const double);
};

template<typename T>
class Vector2D : public Vector<T> {
public:
  Vector2D() : Vector<T>(2) {};

  const double get_cos(const Vector2D&) const;
  const double norm() const;

  void operator=(const Vector2D&);
  double operator*(const Vector2D&);
};

template<typename T>
class Vector3D : public Vector<T> {
public:
  Vector3D() : Vector<T>(3) {};

  const double get_cos(const Vector3D&) const;
  const double norm() const;
};

#include "Matrix.hpp"
#endif
