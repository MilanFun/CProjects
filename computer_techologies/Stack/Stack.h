#pragma once

#include <iomanip> //подключаем библиотеку с шаблонами
#include <iostream>
#include <cassert>
#include <vector>
#include <string>

template <typename T>
class Stack {
private:
  T *data; //указатель на стек
  const int size; //размер стека
  int top; //вершина стека (по индексу)

public:
  // конструктор стека
  Stack(int maxSize);

  // конструктор копирования
  Stack(const Stack<T> &otherStack);

  // деструктор
  ~Stack();

  // поместить элемент в вершину стека
  void push(const T &element);

  // удалить элемент из вершины стека и вернуть его
  T pop();

  // вывод стека на экран
  void Print();

  // n-й элемент от вершины стека
  T Peek(int nomber);

  // получить размер стека (метод класса идет с const)
  int getStackSize() const;

  // получить указатель на стек (метод класса идет с const)
  T *getDat() const;

  // получить номер текущего элемента в стеке (метод класса идет с const)
  int getTop() const;
};

#include "Stack.hpp"
