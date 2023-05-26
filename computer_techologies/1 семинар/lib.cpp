#include "lib.h"
#include <iostream>

Vector2D::Vector2D(double x, double y){
  this -> x = x;
  this -> y = y;
}

Vector2D::set_xy(double x, double y) {
  this -> x = x;
  this -> y = y;
}

Vector2D::get_x()
{
  return this -> x;
}

Vector2D::get_y()
{
  return this -> y;
}
