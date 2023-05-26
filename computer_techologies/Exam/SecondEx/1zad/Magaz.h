#ifndef MAGAZ_H
#define MAGAZ_H

class Money {
protected:
  int rub;
  int cop;
public:
  Money();
  Money(int, int);
  Money(int);
  ~Money();

  int get_rub();
  int get_cop();
  int get_sum();
  void set_rub(int);
  void set_cop(int);

  void input();
  void output();

  void operator=(Money);
  Money operator+(Money);
  Money operator-(Money);
  Money operator*(int);
};

class Things : public Money {
protected:
  int mass;
  std::string name;
  int tcount;
public:
  Things(
    int rub,
    int cop,
    int mass,
    std::string name,
    int count
  ) : Money(
    rub,
    cop
  ) {
    this -> mass = mass;
    this -> name = name;
    tcount = count;
  }
  ~Things();

  void Print();

  int get_mass();
  int get_tcount();
  std::string get_name();
  void set_mass(int);
  void set_name(std::string);

  void operator=(Things);
  Things operator+(Things);
};

class Buying : public Things {
protected:
  int count;
public:
  Buying(
    int rub,
    int cop,
    int mass,
    std::string name,
    int count
  ) : Things(
    rub,
    cop,
    mass,
    name,
    tcount
  ) {
    this -> count = count;
  }
  ~Buying();

  void StreamOut();

  int get_count();
  void set_count(int);

  void operator=(Buying);
  Buying operator+(Buying);
  Buying operator+(Things);
};

#endif
