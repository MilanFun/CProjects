class Vector {
  double x;
  double y;
public:
  Vector();
  Vector(double x, double y);

  double get_x();
  double get_y();

  void set_x(double x);
  void set_y(double y);
/*
  Vector plus(Vector);
  Vector minus(Vector);
  Vector mul(double);
*/
  friend Vector operator+(Vector&);
  friend Vector operator-(Vector&);
  friend double operator*(Vector&);
  friend Vector operator*(double);
};
