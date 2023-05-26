#include <iostream>
#include <cmath>
#include "Complex.h"

Complex::Complex() {
  re = 0.0;
  im = 0.0;
}

Complex::Complex(double r) {
  re = r;
  im = 0.0;
}

Complex::Complex(double r, double i) {
  re = r;
  im = i;
}

Complex::~Complex() {

}

void Complex::set_re(double r) {
  this -> re = r;
}

void Complex::set_im(double i) {
  this -> im = i;
}

double Complex::get_re() {
  return re;
}

double Complex::get_im() {
  return im;
}

long double Complex::abs() {
  return sqrt(re*re + im*im);
}

Complex Complex::operator=(Complex A) {
  this -> re = A.re;
  this -> im = A.im;
  return *this;
}

Complex Complex::operator+=(Complex A) {
  re += A.re;
  im += A.im;
  return *this;
}

Complex Complex::operator-=(Complex A) {
  re -= A.re;
  im -= A.im;
  return *this;
}


Complex Complex::operator+(Complex A) {
  return Complex(re + A.re, im + A.im);
}

Complex Complex::operator-(Complex A) {
  return Complex(re - A.re, im - A.im);
}

Complex Complex::operator*(const Complex A) {
  return Complex(re * A.re - im * A.im, re * A.im + im * A.re);
}

Complex Complex::operator/(const Complex A) {
  Complex temp;

  double r = A.re * A.re + A.im * A.im;

  try{
    if(r == 0) throw "Division on 0";
  }
  catch(const char* msg) {
    std::cout << msg << std::endl;
  }
  
  temp.re = (re * A.re + im * A.im) / r;
  temp.im = (im * A.re - re * A.im) / r;

  return temp;
}

std::ostream &operator<<(std::ostream& out, const Complex& A) {
  out << "(" << A.re << ", " << A.im << ")";
  return out;
}

std::istream &operator>>(std::istream &in, Complex &A) {
  double re;
  double im;

  in >> re >> im;
  A.set_re(re);
  A.set_im(im);
  return in;
}
