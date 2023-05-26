#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
  double re;
  double im;
public:
  Complex();
  Complex(double);
  Complex(double, double);
  ~Complex();

  void set_re(double);
  void set_im(double);
  double get_re();
  double get_im();

  long double abs();
  Complex operator=(Complex);
  Complex operator+=(Complex);
  Complex operator-=(Complex);
  Complex operator+(Complex);
  Complex operator-(Complex);
  Complex operator*(const Complex);
  Complex operator/(const Complex);

  friend std::ostream& operator<<(std::ostream&, const Complex&);
  friend std::istream& operator>>(std::istream&, Complex&);
};

#endif
