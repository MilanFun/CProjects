#include <iostream>
#include "Head.h"

Point2D::Point2D() {
  this -> x = 0;
  this -> y = 0;
}

Point2D::Point2D(int x, int y) {
  this -> x = x;
  this -> y = y;
}

void Point2D::stream2() {
  std::cout << "(" << this -> x << ":" << this -> y << ")" << std::endl;
}

int Point2D::get_xy(int a) {
  if(a == 0) {
    return this -> x;
  } else {
    return this -> y;
  }
}

void Point2D::set_xy(int x, int y) {
  this -> x = x;
  this -> y = y;
}

/********************************************************/

Point3D::Point3D(int x, int y, int z) : Point2D(x, y) {
  this -> z = z;
}

int Point3D::get_xyz(int a) {
  if(a == 0) {
    return this -> x;
  } else if(a == 1) {
    return this -> y;
  } else {
    return this -> z;
  }
}

void Point3D::set_xyz(int x, int y, int z) {
  this -> x = x;
  this -> y = y;
  this -> z = z;
}

void Point3D::stream3() {
  std::cout << "(" << this -> x << ":" << this -> y << ":" << this -> z << ")" <<std::endl;
}

/********************************************************/

Vector2D::Vector2D(Point2D A, Point2D B) {
  this -> A = A.get_xy(0);
  this -> B = B;
}
