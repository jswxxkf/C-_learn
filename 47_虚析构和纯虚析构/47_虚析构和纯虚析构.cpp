//
// Created by 29024 on 2020/12/2.
//
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
  Animal() {
    cout << "Animal构造函数调用" << endl;
  }

  // 纯虚析构
  // virtual ~Animal() = 0;

  // 虚析构
  virtual ~Animal() {
    cout << "Animal析构函数调用" << endl;
  }

  // 纯虚函数
  virtual void speak() = 0;
};

class Cat : public Animal {
public:
  Cat(string name) {
    cout << "Cat构造函数调用" << endl;
    this->name = new string(name);
  }

  ~Cat() {
    if (this->name != NULL) {
      cout << "Cat析构函数调用" << endl;
      delete name;
      name = NULL;
    }
  }

  virtual void speak() {
    cout << *this->name << "小猫在说话" << endl;
  }

  string *name;
};

void test01() {
  Animal *animal = new Cat("Tom");
  animal->speak();
  delete animal;
}

int main() {
  test01();
  system("pause");
  return 0;
}