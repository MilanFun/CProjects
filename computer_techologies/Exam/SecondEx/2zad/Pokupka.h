#pragma once

#ifndef POKUPKA_H
#define POKUPKA_H

#include <iostream>
#include <string>
#include <iomanip>

template<typename T, typename U>
class Pokupka {
private:
  T money;
  U mass;
  std::string name;
  int count;
public:
  Pokupka(T, U, std::string, int);

  void output();
  void input();

  T get_money();
  U get_mass();
  std::string get_name();
  int get_count();

  void set_money(T);
  void set_mass(U);
  void set_name(std::string);
  void set_count(int);

  void operator=(Pokupka);
  Pokupka operator+(Pokupka);
  Pokupka operator-(Pokupka);
  Pokupka operator*(int);
};

#include "Pokupka.hpp"

#endif
