#include <string>

class Human {
protected:

  int age;
  std::string name;

public:

  Human();
  Human(int age, std::string name);

  void get_AN();
  void set_AN(int, std::string);

};

class Student : public Human {          //Наследование
protected:
  int scores;
public:

  Student(
    int age,
    std::string name,
    int scores
  ) : Human(
    age,
    name
  ) {
    this -> scores = scores;
  }

  void get_ANS();
  void set_ANS(int);

};

class Teacher : public Human {
protected:
  int salary;
public:

  Teacher(
    int age,
    std::string name,
    int salary
  );

  void get_ANJ();
  void set_ANJ(int);

};
