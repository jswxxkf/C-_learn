//
// Created by 29024 on 2020/12/3.
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

  void showPerson();

  Person(T1 name, T2 age);
};

//����ʵ��ģ�����Ա����
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
  this->name = name;
  this->age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson() {
  cout << "������" << this->name << " ���䣺" << this->age << endl;
}

void test01() {
  Person<string, int> p = Person<string, int>("lidan", 19);
  p.showPerson();
}

int main(int argc, const char *argv[]) {
  test01();
  system("pause");
  return 0;
}