template <typename T>
Stack<T>::Stack(int maxSize) : size(maxSize){
    data = new T[size];
    top = 0;
}

template <typename T>
Stack<T>::Stack(const Stack<T> &otherStack) : size(otherStack.getStackSize()){
    data = new T[size]; //выделяем память под новый стек, в который копируем старый
    top = otherStack.getTop(); //получаем вершину (стека по индексу)

    for(int i = 0; i < top; i++) {
      data[i] = otherStack.getDat()[i]; //заполняем стек с помощью получение указателя с старого стека
    }
}

template <typename T>
Stack<T>::~Stack() {
  delete[] data;
}

template <typename T>
void Stack<T>::push(const T &element){
    data[top++] = element;
}

template <typename T>
T Stack<T>::pop(){
    //можно сделать и так: top -= 1
    return data[--top];
}

template <typename T>
void Stack<T>::Print(){
    for(int i = top - 1; i >= 0; i--) {
      std::cout << "|" << data[i] << std::endl;
    }
    std::cout << std::endl;
}

template <typename T>
T Stack<T>::Peek(int nomber) {
    return data[top - nomber];
}

template <typename T>
int Stack<T>::getStackSize() const{
  return size;
}

template <typename T>
T* Stack<T>::getDat() const{
  return data;
}

template <typename T>
int Stack<T>::getTop() const{
  return top;
}
