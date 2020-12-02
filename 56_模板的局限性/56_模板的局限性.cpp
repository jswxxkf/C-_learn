//
// Created by Administrator on 2020/12/2.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//̽����ζԱ������Զ������������Ƿ����

class Person {
public:
  string name;
  int age;

  Person(string name, int age) {
    this->name = name;
    this->age = age;
  }
};

template<class T>
bool myCompare(T &a, T &b) {
  return a == b;
}

// ���þ��廯��Person�İ汾ʵ�ִ��룬���廯���ȵ���
template<>
bool myCompare(Person &a, Person &b) {
  return a.age == b.age && a.name == b.name;
}

void test01() {
  int a = 10;
  int b = 20;
  bool res = myCompare(a, b);
  if (res) {
    cout << "a==b" << endl;
  } else {
    cout << "a!=b" << endl;
  }
}

void test02() {
  Person p1 = Person("lidan", 19);
  Person p2 = Person("lidan", 19);
  bool res = myCompare(p1, p2);
  if (res) {
    cout << "p1==p2" << endl;
  } else {
    cout << "p1!=p2" << endl;
  }
}

int main(int argc, const char *argv[]) {
  test01();
  test02();
  system("pause");
  return 0;
}