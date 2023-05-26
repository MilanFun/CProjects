#include <iostream>
#include <string>
#include "Magaz.h"

Money::Money() {
  rub = 0;
  cop = 0;
}

Money::Money(int a, int b) {
  int sum = a*100 + b;
  rub = sum / 100;
  cop = sum % 100;
}

Money::Money(int sum) {
  rub = sum / 100;
  cop = sum % 100;
}

Money::~Money(){

}

int Money::get_rub() {
  return rub;
}

int Money::get_cop() {
  return cop;
}

int Money::get_sum() {
  int sum = rub*100 + cop;
  return sum;
}

void Money::set_rub(int a) {
  rub = a;
}

void Money::set_cop(int b) {
  if(b >= 0 && b <= 99) cop = b;
}

void Money::input() {
  int a, b;

  std::cin >> a;
  std::cin >> b;

  int sum = a*100 + b;

  rub = sum / 100;
  cop = sum % 100;
}

void Money::output() {
  std::cout << "(rub: " << rub << ", "
            << "cop: " << cop << ")"
            << std::endl;
}
void Money::operator=(Money A) {
  rub = A.get_rub();
  cop = A.get_cop();
}

Money Money::operator+(Money A) {
  int sum = (*this).get_sum() + A.get_sum();
  return Money(sum);
}

Money Money::operator-(Money A) {
  try{
    int sum = (*this).get_sum() - A.get_sum();
    if(sum < 0) {
      throw "Error";
    } else {
      return Money(sum);
    }
  }
  catch(const char* msg) {
    std::cout << msg << std::endl;
  }
}

Money Money::operator*(int a) {
  int sum = (*this).get_sum() * a;
  return Money(sum);
}

//-----------------------------------------------------------------//

Things::~Things() {

}

void Things::Print() {
  std::cout << "(rub: " << rub << ", "
            << "cop: " << cop << ", Things: "
            << "mass: "<< mass << ", name: " << name << ")"
            << std::endl;
}

int Things::get_mass() {
  return mass;
}

int Things::get_tcount() {
  return tcount;
}
std::string Things::get_name() {
  return name;
}

void Things::set_mass(int a) {
  mass = a;
}

void Things::set_name(std::string str) {
  name = str;
}

void Things::operator=(Things A) {
  rub = A.get_rub();
  cop = A.get_cop();
  mass = A.get_mass();
  name = A.get_name();
  tcount = A.get_tcount();
}

Things Things::operator+(Things A) {
  rub += A.get_rub();
  cop += A.get_cop();
  mass += A.get_mass();
  name = A.get_name();
  tcount += 1;
  return Things(rub, cop, mass, name, tcount);
}

//-----------------------------------------------------------------//
Buying::~Buying() {

}

void Buying::StreamOut() {
  std::cout << "(rub: " << rub << ", "
            << "cop: " << cop << ", Things: "
            << "mass: "<< mass << ", name: " << name << ")"
            << std::endl;
  std::cout << "Total: " << count << std::endl;
}

int Buying::get_count() {
  return count;
}

void Buying::set_count(int a) {
  count = a;
}

void Buying::operator=(Buying A) {
  rub = A.get_rub();
  cop = A.get_cop();
  mass = A.get_mass();
  name = A.get_name();
  count = A.get_count();
}

Buying Buying::operator+(Buying A) {
  rub += A.get_rub();
  cop += A.get_cop();
  mass += A.get_mass();
  name = A.get_name();
  count += A.get_count();
  return Buying(rub, cop, mass, name, count);
}

Buying Buying::operator+(Things A) {
  rub += A.get_rub();
  cop += A.get_cop();
  mass += A.get_mass();
  name = A.get_name();
  count += A.get_tcount();
  return Buying(rub, cop, mass, name, count);
}
