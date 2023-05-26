#include <iostream>
#include "vector.h"

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

void Vector::set_x(double x) {
  this -> x = x;
}

void Vector::set_y(double y) {
  this -> y = y;
}
/*
Vector Vector::plus(Vector A) {
  return Vector(this->x + A.get_x(), this->y + A.get_y());
}

Vector Vector::minus(Vector A) {
  return Vector(this->x - A.get_x(), this->y - A.get_y());
}

Vector Vector::mul(double a) {
    return Vector(a * get_x(), a * get_y());
}
*/
Vector Vector::operator+(Vector A) {
  return Vector(this->x + A.get_x(), this->y + A.get_y());
}

Vector Vector::operator-(Vector A) {
  return Vector(this->x - A.get_x(), this->y - A.get_y());
}

Vector Vector::operator*(double a) {
  return Vector(a * get_x(), a * get_y());
}

double Vector::operator*(Vector A) {
  return (this->x * A.get_x() + this->y * A.get_y());
}
