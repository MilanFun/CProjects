template<typename T, typename U>
Pokupka<T, U>::Pokupka(T a, U b, std::string name, int c) {
    money = a;
    mass = b;
    this -> name = name;
    count = c;
}

template<typename T, typename U>
void Pokupka<T, U>::output() {
  std::cout << "Money: " << money << std::endl;
  std::cout << "Mass: " << mass << std::endl;
  std::cout << "Name: " << name << std::endl;
  std::cout << "Count: " << count << std::endl;
}

template<typename T, typename U>
void Pokupka<T, U>::input() {
  T a;
  U b;
  std::string str;
  int c;

  std::cin >> a >> b >> str >> c;

  money = a;
  mass = b;
  name = str;
  count = c;
}

template<typename T, typename U>
T Pokupka<T, U>::get_money() {
  return money;
}

template<typename T, typename U>
U Pokupka<T, U>::get_mass() {
  return mass;
}

template<typename T, typename U>
std::string Pokupka<T, U>::get_name() {
  return name;
}

template<typename T, typename U>
int Pokupka<T, U>::get_count() {
  return count;
}

template<typename T, typename U>
void Pokupka<T, U>::set_money(T a) {
  money = a;
}

template<typename T, typename U>
void Pokupka<T, U>::set_mass(U a) {
  mass = a;
}

template<typename T, typename U>
void Pokupka<T, U>::set_name(std::string a) {
  name = a;
}

template<typename T, typename U>
void Pokupka<T, U>::set_count(int a) {
  count = a;
}

template<typename T, typename U>
void Pokupka<T, U>::operator=(Pokupka<T, U> A) {
  money = A.get_money();
  mass = A.get_mass();
  name = A.get_name();
  count = A.get_count();
}

template<typename T, typename U>
Pokupka<T, U> Pokupka<T, U>::operator+(Pokupka<T, U> A) {
  T a = money + A.get_money();
  U b = mass + A.get_mass();
  int c = count + A.get_count();
  return Pokupka(a, b, A.get_name(), c);
}

template<typename T, typename U>
Pokupka<T, U> Pokupka<T, U>::operator-(Pokupka<T, U> A) {
  try{
    T a = money - A.get_money();
    U b = mass - A.get_mass();

    if(a < 0 || b < 0) throw "Error";

    int c = count - A.get_count();
    return Pokupka(a, b, A.get_name(), c);
  }
  catch(const char* msg) {
    std::cout << msg << std::endl;
  }
}

template<typename T, typename U>
Pokupka<T, U> Pokupka<T, U>::operator*(int a) {
  T r = money * a;
  U b = mass * a;
  int c = count * a;
  return Pokupka(r, b, (*this).get_name(), c);
}
