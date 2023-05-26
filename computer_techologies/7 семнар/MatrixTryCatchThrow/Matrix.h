class Matrix {
  int *data; //указатель на матрицу
  int size; //размер матрицы
  int n; //количество столбцов
  int m; //количство строк
public:
  Matrix(int, int);//конструктор
  void delMatr(); //деконструктор

  void PrintMatrix(); //вывод матрицы

  int Determinate(); //детерминант матрицы
};
