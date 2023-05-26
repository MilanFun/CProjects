template<typename T>
Matrix<T>::Matrix(int n, int m) {
  col = n;
  row = m;
  int size = col * row;
  data = new T[size];
}

template<typename T>
Matrix<T>::Matrix(const Matrix<T>& copy) : col(copy.col), row(copy.row) {
  int size = col * row;
  data = new T[size];

  for(int i = 0; i < size; i++) {
    data[i] = copy.data[i];
  }
}

template<typename T>
Matrix<T>::~Matrix() {
  delete[] data;
}

template<typename T>
int Matrix<T>::get_col() const{
  return col;
}

template<typename T>
int Matrix<T>::get_row() const{
  return row;
}

template<typename T>
T Matrix<T>::getElem(int i, int j) {
  return data[i*col + j];
}

template<typename T>
void Matrix<T>::setElem(int i, int j, T num) {
  data[i*col + j] = num;
}

template<typename T>
void Matrix<T>::transpose() {
  T t;
  for(int i = 0; i < row; ++i) {
    for(int j = i; j < col; ++j) {
      t = (*this).getElem(i,j);
      data[i*col + j] = (*this).getElem(j,i);
      data[j*col + i] = t;
    }
  }
}

template<typename T>
void Matrix<T>::input() const{
  int size = col * row;
  for(int i = 0; i < size; i++) {
    std::cin >> data[i];
  }
}

template<typename T>
void Matrix<T>::output() const{
  for(int i = 0, k = 0; i < row; i++) {
    for(int j = 0; j < col; j++, k++) {
      std::cout << data[k] << " ";
    }
    std::cout << std::endl;
  }
}

template<typename T>
void Matrix<T>::operator=(const Matrix<T>& A) {
  int np = col * row;
  for(int i = 0, k = 0; i < np; i++) {
      data[i] = A.data[i];
  }
}

template<typename T>
Matrix<T> Matrix<T>::operator+(Matrix<T>& A) {
  try {
    if(A.get_col() != col || A.get_row() != row) {
      throw "Error";
    }

    int size = col * row;
    Matrix<T> R(A);
    for(int i = 0; i < size; i++) {
      R.data[i] = data[i] + A.data[i];
    }
    return R;
  }
  catch(const char* msg) {
    std::cout << msg << std::endl;
  }
}

template<typename T>
Matrix<T> Matrix<T>::operator-(Matrix<T>& A) {
  try {
    if(A.get_col() != col || A.get_row() != row) {
      throw "Error";
    }

    int size = col * row;
    Matrix<T> R(A);
    for(int i = 0; i < size; i++) {
      R.data[i] = data[i] - A.data[i];
    }
    return R;
  }
  catch(const char* msg) {
    std::cout << msg << std::endl;
  }
}

template<typename T>
Matrix<T> Matrix<T>::operator*(int a) {
  int size = col * row;
  Matrix<T> A(*this);
  for(int i = 0; i < size; i++) {
    A.data[i] *= a;
  }
  return A;
}

template<typename T>
Matrix<T> Matrix<T>::operator*(Matrix<T>& A) {
  try{
    if(row != A.get_col()) {
      throw "Error";
    }

    Matrix<T> R(col, A.get_row());

    for (int y = 0; y < row; ++y) {
      for (int x = 0; x < A.get_col(); ++x) {
        for (int z = 0; z < A.get_row(); ++z) {
          R.setElem(x, y, R.getElem(x, y) + (*this).getElem(z, y) * A.getElem(x, z));
        }
      }
    }

    return R;
  }
  catch(const char* msg) {
    std::cout << msg << std::endl;
  }
}

//-----------------------------------------------------------------------//

template<typename T>
double Vector<T>::norm() const {
  double tmp = 0;
  for(int i = 0; i < (*this).get_row(); i++) {
    tmp += (double)pow(this -> data[i], 2);
  }
  return sqrt(tmp);
}

template<typename T>
void Vector<T>::operator=(const Vector<T>& A) {
  for(int i = 0; i < (*this).get_row(); i++) {
    this -> data[i] = A.data[i];
  }
}

template<typename T>
Vector<T> Vector<T>::operator*(const double a) {
  for(int i = 0; i < (*this).get_row(); i++) {
    this -> data[i] *= a;
  }
  return (*this);
}

//-----------------------------------------------------------------------//

template<typename T>
const double Vector2D<T>::norm() const {
  double tmp = 0;
  for(int i = 0; i < 2; i++) {
    tmp += (double)pow(this -> data[i], 2);
  }
  return sqrt(tmp);
}

template<typename T>
const double Vector2D<T>::get_cos(const Vector2D& A) const {
  double res = 0;
  for(int i = 0; i < 2; i++) {
    res += (*this).data[i] * A.data[i];
  }
  return (res/((*this).norm()*A.norm()));
}

template<typename T>
void Vector2D<T>::operator=(const Vector2D<T>& A) {
  for(int i = 0; i < 2; i++) {
    this -> data[i] = A.data[i];
  }
}

template<typename T>
double Vector2D<T>::operator*(const Vector2D<T>& A) {
  return (*this).norm() * A.norm() * (*this).get_cos(A);
}

//-----------------------------------------------------------------------//

template<typename T>
const double Vector3D<T>::norm() const {
  double tmp = 0;
  for(int i = 0; i < 3; i++) {
    tmp += (double)pow(this -> data[i], 2);
  }
  return sqrt(tmp);
}
