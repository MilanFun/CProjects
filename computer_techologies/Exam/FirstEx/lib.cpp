#include <iostream>
#include "Time.h"
using namespace std;

Time::Time() {
  this -> day = 0;
  this -> hour = 0;
  this -> minute = 0;
  this -> second = 0.0;
}

Time::Time(int a, int b, int c, double d) {
  this -> day = a;
  this -> hour = b;
  this -> minute = c;
  this -> second = d;
}

void Time::StreamOut() {
  cout << "day = " << this -> day << " ";
  cout << "hour = " << this -> hour << " ";
  cout << "minute = " << this -> minute << " ";
  cout << "second = " << this -> second << " ";
  cout << endl;
}

int Time::get_d() {
  return (this -> day);
}

int Time::get_h() {
  return (this -> hour);
}

int Time::get_m() {
  return (this -> minute);
}

double Time::get_s() {
  return (this -> second);
}

void Time::set_d(int a) {
  this -> day = a;
}

void Time::set_h(int a) {
  this -> hour = a;
}

void Time::set_m(int a) {
  this -> minute = a;
}

void Time::set_s(double a) {
  this -> second = a;
}

Time Time::refresh() {
  int d = this -> day;
  int h = this -> hour;
  int m = this -> minute;
  double s = this -> second;
  double res;

  res = (d * 86400) + (h * 3600) + (m * 60) + s;
  d = (int)res / 86400;
  s = (int)res % 60;
  h = (int)res / 3600;
  res -= h * 3600;
  h %= 24;
  m = (int)res / 60 % 60;

  Time B(d, h, m, s);

  return B;
}

Time Time::operator+(Time A) {
  int d;
  int h;
  int m;
  double s;

  d = this -> day + A.get_d();
  h = this -> hour + A.get_h();
  m = this -> minute + A.get_m();
  s = this -> second + A.get_s();

  Time B(d, h, m, s);

  return B.refresh();
}

Time Time::operator-(Time A) {
  int d;
  int h;
  int m;
  double s;

  d = this -> day - A.get_d();
  h = this -> hour - A.get_h();
  m = this -> minute - A.get_m();
  s = this -> second - A.get_s();

  Time B(d, h, m, s);

  return B.refresh();
}

Time Time::operator*(double a) {
    int d;
    int h;
    int m;
    double s;

    d = this -> day * a;
    h = this -> hour * a;
    m = this -> minute * a;
    s = this -> second * a;

    Time B(d, h, m, s);

    return B.refresh();
}

Time Time::operator/(double a) {
    int d;
    int h;
    int m;
    double s;

    d = this -> day / a;
    h = this -> hour / a;
    m = this -> minute / a;
    s = this -> second / a;

    Time B(d, h, m, s);

    return B.refresh();
}

bool Time::operator==(Time A) {
  if((this -> day == A.get_d()) && (this -> hour == A.get_h()) &&
     (this -> minute == A.get_m()) && (this -> second == A.get_s())) {
       return true;
     } else {
       return false;
     }
}

bool Time::operator!=(Time A) {
  if((this -> day != A.get_d()) && (this -> hour != A.get_h()) &&
     (this -> minute != A.get_m()) && (this -> second != A.get_s())) {
       return true;
     } else {
       return false;
     }
}

bool Time::operator>(Time A) {
  double res1 = (this -> day * 86400) + (this -> hour * 3600)
      + (this -> minute * 60) + this -> second;
  double res2 = (A.get_d() * 86400) + (A.get_h() * 3600)
      + (A.get_m() * 60) + A.get_s();

  if(res1 > res2) {
    return true;
  } else {
    return false;
  }
}

bool Time::operator<(Time A) {
  double res1 = (this -> day * 86400) + (this -> hour * 3600)
      + (this -> minute * 60) + this -> second;
  double res2 = (A.get_d() * 86400) + (A.get_h() * 3600)
      + (A.get_m() * 60) + A.get_s();

  if(res1 < res2) {
    return true;
  } else {
    return false;
  }
}

bool Time::operator>=(Time A) {
  double res1 = (this -> day * 86400) + (this -> hour * 3600)
      + (this -> minute * 60) + this -> second;
  double res2 = (A.get_d() * 86400) + (A.get_h() * 3600)
      + (A.get_m() * 60) + A.get_s();

  if(res1 >= res2) {
    return true;
  } else {
    return false;
  }
}

bool Time::operator<=(Time A) {
  double res1 = (this -> day * 86400) + (this -> hour * 3600)
      + (this -> minute * 60) + this -> second;
  double res2 = (A.get_d() * 86400) + (A.get_h() * 3600)
      + (A.get_m() * 60) + A.get_s();

  if(res1 <= res2) {
    return true;
  } else {
    return false;
  }
}

Time operator++(Time& A, int a) {
  Time B(A.get_d() + 1, A.get_h() + 1, A.get_m() + 1, A.get_s() + 1);
  return B.refresh();
}

Time operator++(Time& A) {
  Time B(A.get_d() + 1, A.get_h() + 1, A.get_m() + 1, A.get_s() + 1);
  return B.refresh();
}

Time operator--(Time& A, int a) {
  Time B(A.get_d() - 1, A.get_h() - 1, A.get_m() - 1, A.get_s() + 1);
  return B.refresh();
}

Time operator--(Time& A) {
  Time B(A.get_d() - 1, A.get_h() - 1, A.get_m() - 1, A.get_s() - 1);
  return B.refresh();
}

Time operator+=(Time& C, Time& A) {
  C = C + A;
  return C.refresh();
}

Time operator-=(Time& C, Time& A) {
  C = C - A;
  return C.refresh();
}

Time operator*=(Time& C, double a) {
  C = C * a;
  return C.refresh();
}

Time operator/=(Time& C, double a) {
  C = C / a;
  return C.refresh();
}

ostream &operator<<(ostream& out, Time& C) {
  out << "day = " << C.get_d() << " ";
  out << "hour = " << C.get_h() << " ";
  out << "minute = " << C.get_m() << " ";
  out << "second = " << C.get_s() << " ";

return out;
}

istream &operator>>(istream& in, Time& C) {
  int d;
  int h;
  int m;
  double s;

  in >> d >> h >> m >> s;

  C.set_d(d);
  C.set_h(h);
  C.set_m(m);
  C.set_s(s);
  C.refresh();

return in;
}

Time operator+(Time& A) {
  Time J(+A.get_d(), +A.get_h(), +A.get_m(), +A.get_s());
  return J;
}

Time operator-(Time& A) {
  Time J(-A.get_d(), -A.get_h(), -A.get_m(), -A.get_s());
  return J;
}

Time::~Time() {

}
