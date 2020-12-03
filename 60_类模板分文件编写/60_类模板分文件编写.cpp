//
// Created by 29024 on 2020/12/3.
//

#include <iostream>
#include <string>

//第一种解决方式，直接包含源文件
//#include "person.cpp"

//第二种解决方式，合二为一 将.h和.cpp文件合为.hpp文件(类的声明和成员函数实现都在一起了)
#include "person.hpp"

using namespace std;

//template<class T1, class T2>
//class Person {
//public:
//  T1 name;
//  T2 age;
//
//  void showPerson();
//
//  Person(T1 name, T2 age);
//};

//类外实现模板类成员函数
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age) {
//  this->name = name;
//  this->age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//  cout << "姓名：" << this->name << " 年龄：" << this->age << endl;
//}

void test01() {
  Person<string, int> p = Person<string, int>("lidan", 19);
  p.showPerson();
}

int main(int argc, const char *argv[]) {
  test01();
  system("pause");
  return 0;
}