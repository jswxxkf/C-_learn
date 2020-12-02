//
// Created by 29024 on 2020/12/2.
//
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
  Animal() {
    cout << "Animal���캯������" << endl;
  }

  // ��������
  // virtual ~Animal() = 0;

  // ������
  virtual ~Animal() {
    cout << "Animal������������" << endl;
  }

  // ���麯��
  virtual void speak() = 0;
};

class Cat : public Animal {
public:
  Cat(string name) {
    cout << "Cat���캯������" << endl;
    this->name = new string(name);
  }

  ~Cat() {
    if (this->name != NULL) {
      cout << "Cat������������" << endl;
      delete name;
      name = NULL;
    }
  }

  virtual void speak() {
    cout << *this->name << "Сè��˵��" << endl;
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