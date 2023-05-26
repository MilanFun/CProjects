#include "Human.h"
#include <string>
#include <iostream>

Human::Human() {
  this -> age = 0;
  this -> name = "Nobody";
}

Human::Human(int age, std::string name) {
  this -> age = age;
  this -> name = name;
}

void Human::get_AN() {
  std::cout << this -> name << ":" << this -> age << std::endl;
}

void Human::set_AN(int age, std::string name) {
  this -> age = age;
  this -> name = name;
}

void Student::get_ANS() {
  std::cout << this -> name << ": " << this -> age << "\nscore = " << this -> scores <<std::endl;
}

void Teacher::get_ANJ() {
  std::cout << this -> name << ": " << this -> age << "\nsalary = " << this -> salary<< "$" <<std::endl;
}

void Student::set_ANS(int score) {
  this -> scores = score;
}

void Teacher::set_ANJ(int salary) {
  this -> salary = salary;
}

Teacher::Teacher(int age, std::string name, int salary) : Human(age, name) {
  this -> salary = salary;
}
