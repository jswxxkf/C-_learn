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
    cout << "������" << this->name << " ���䣺" << this->age << endl;
  }
};

// 1. ָ����������
void printPerson1(Person<string, int> &p) {
  p.showPerson();
}

// 2. ����ģ�廯
template<class T1, class T2>
void printPerson2(Person<T1, T2> &p) {
  p.showPerson();
  cout << "T1������Ϊ��" << typeid(T1).name() << endl;
  cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}

// 3. ������ģ�廯���൱�ں���ģ�壩
template<class T>
void printPerson3(T &p) {
  p.showPerson();
  cout << "T������Ϊ��" << typeid(T).name() << endl;
}

void test01() {
  Person<string, int> p("�", 19);
  printPerson1(p);
}

void test02() {
  Person<string, int> p("�˼���", 20);
  printPerson2(p);
}

void test03() {
  Person<string, int> p("ʯ����", 21);
  printPerson3(p);
}

int main(int argc, const char *argv[]) {
  test01();
  test02();
  test03();
  system("pause");
  return 0;
}