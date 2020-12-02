//
// Created by Administrator on 2020/12/2.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

template<class T1, class T2>
class Person {
public:
  T1 name;
  T2 age;

  Person(T1 name, T2 age) : name(name), age(age) {}

  void showPerson() {
    cout << "姓名：" << this->name << " 年龄：" << this->age << endl;
  }
};

// 1. 指定传入类型
void printPerson1(Person<string, int> &p) {
  p.showPerson();
}

// 2. 参数模板化
template<class T1, class T2>
void printPerson2(Person<T1, T2> &p) {
  p.showPerson();
  cout << "T1的类型为：" << typeid(T1).name() << endl;
  cout << "T2的类型为：" << typeid(T2).name() << endl;
}

// 3. 整个类模板化（相当于函数模板）
template<class T>
void printPerson3(T &p) {
  p.showPerson();
  cout << "T的类型为：" << typeid(T).name() << endl;
}

void test01() {
  Person<string, int> p("李丹", 19);
  printPerson1(p);
}

void test02() {
  Person<string, int> p("顾佳清", 20);
  printPerson2(p);
}

void test03() {
  Person<string, int> p("石怀钰", 21);
  printPerson3(p);
}

int main(int argc, const char *argv[]) {
  test01();
  test02();
  test03();
  system("pause");
  return 0;
}