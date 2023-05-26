class Matrix {
  int *data;
public:
  Matrix(int);//конструктор
  void delMatr(); //деконструктор

  void PrintMatrix(); //вывод матрицы

  Matrix operator+(Matrix);
  Matrix operator-(Matrix);
  Matrix operator*(int);
  Matrix operator*(Matrix);
  Matrix trans();
  int* operator*(int*);
};
