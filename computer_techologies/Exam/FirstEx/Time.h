class Time{
  int day;
  int hour;
  int minute;
  double second;
public:
  //инициализация класса
  Time();
  Time(int, int, int, double);
  ~Time();
  //вывод и конвертирование в корректное время
  void StreamOut();
  Time refresh();
  //геттеры
  int get_d();
  int get_h();
  int get_m();
  double get_s();
  //сеттеры
  void set_d(int);
  void set_h(int);
  void set_m(int);
  void set_s(double);
  //операции
  Time operator+(Time);
  Time operator-(Time);
  Time operator*(double);
  Time operator/(double);
  //логические операции
  bool operator!=(Time);
  bool operator==(Time);
  bool operator>(Time);
  bool operator<(Time);
  bool operator>=(Time);
  bool operator<=(Time);
  //унарные операции
  friend Time operator+(Time&);
  friend Time operator-(Time&);
  friend Time operator++(Time&, int);
  friend Time operator++(Time&);
  friend Time operator--(Time&, int);
  friend Time operator--(Time&);
  friend Time operator+=(Time&, Time&);
  friend Time operator-=(Time&, Time&);
  friend Time operator*=(Time&, double);
  friend Time operator*=(Time&, double);
  friend Time operator/=(Time&, double);
  //вывод и ввод 
  friend std::ostream &operator<<(std::ostream& out, Time&);
  friend std::istream &operator>>(std::istream& in, Time&);
};
