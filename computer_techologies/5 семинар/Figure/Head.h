class Point2D {
protected:
  int x;
  int y;
public:
  Point2D();
  Point2D(int, int);

  void stream2();

  int get_xy(int);
  void set_xy(int, int);
};

class Point3D : public Point2D {
protected:
  int z;
public:
  Point3D(int, int, int);

  void stream3();

  int get_xyz(int);
  void set_xyz(int, int, int);
};

class Vector2D {
protected:
  Point2D A;
  Point2D B;
public:
  Vector2D(Point2D, Point2D);
}
