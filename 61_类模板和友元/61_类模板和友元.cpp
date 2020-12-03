//
// Created by 29024 on 2020/12/3.
//

#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>
class Person {
  //通过全局函数打印Person信息
  friend void printPerson(Person<T1, T2> p) {
    cout << "姓名：" << p.name << " 年龄：" << p.age << endl;
  }

//  friend void printPerson2(Person<T1, T2> p);

public:
  Person(T1 name, T2 age) {
    this->name = name;
    this->age = age;
  }

private:
  T1 name;
  T2 age;
};

//1. 全局函数在类内实现
void test01() {
  Person<string, int> p = Person<string, int>("李丹", 20);
  printPerson(p);
}

//2. 全局函数类外实现 (不推荐)
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p) {
//  cout << "类外实现 - 姓名：" << p.name << " 年龄：" << p.age << endl;
//}

//void test02(){
//  Person<string, int> p2("xkf", 22);
//  printPerson2(p2);
//}

int main(int argc, const char *argv[]) {
  test01();
//  test02();
  system("pause");
  return 0;
}