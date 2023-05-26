class Vector {
  double x;
  double y;
public:
  Vector(double, double);
  Vector();

  double get_x();
  double get_y();

  friend double module(double, double);

  friend Vector operator+(Vector&, Vector&);
  friend Vector operator-(Vector&, Vector&);
  friend Vector operator*(Vector&, int);
  friend Vector operator*(int, Vector&);
  friend int operator*(Vector&, Vector&);
  //Унарные операции
  friend Vector operator-(Vector&);
  friend Vector operator+(Vector&);
  friend Vector operator++(Vector&); // b = ++a
  friend Vector operator++(Vector&, int); // b = a++
  friend Vector operator--(Vector&); //b = --a
  friend Vector operator--(Vector&, int); // b = a--
  friend Vector operator+=(Vector&, Vector&); // b += a
  friend Vector operator-=(Vector&, Vector&); // b -= a
  friend int operator*=(Vector&, Vector&); // b *= a
  friend Vector operator*=(Vector&, int); // B *= a
  friend bool operator==(Vector&, Vector&); // B == B?
  friend bool operator!=(Vector&, Vector&); // B != A
  friend bool operator>(Vector&, Vector&);
  friend bool operator<(Vector&, Vector&);
  friend bool operator>=(Vector&, Vector&);
  friend bool operator<=(Vector&, Vector&);
};
