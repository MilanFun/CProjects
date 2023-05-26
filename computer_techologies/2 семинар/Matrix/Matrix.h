class Matrix {
public:
  int** data;

  Matrix(int); //конструктор

  void outStream(); //вывод матрицы
  void null(); //обнуление матрицы
  void trans(); //транспонирование матрицы

  Matrix operator+(Matrix); //сложение матриц
  Matrix operator-(Matrix); //вычетание матриц
  Matrix operator*(int); //умножение матрицы на число
  Matrix operator*(Matrix); //умножение матрицы на матрицу
};

class Vector {
public:
  double x;
  double y;

  Vector();
  Vector(double x, double y);

  double get_x();
  double get_y();

  Vector operator*(Matrix);
};
