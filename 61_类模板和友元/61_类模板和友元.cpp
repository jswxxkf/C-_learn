//
// Created by 29024 on 2020/12/3.
//

#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>
class Person {
  //ͨ��ȫ�ֺ�����ӡPerson��Ϣ
  friend void printPerson(Person<T1, T2> p) {
    cout << "������" << p.name << " ���䣺" << p.age << endl;
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

//1. ȫ�ֺ���������ʵ��
void test01() {
  Person<string, int> p = Person<string, int>("�", 20);
  printPerson(p);
}

//2. ȫ�ֺ�������ʵ�� (���Ƽ�)
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p) {
//  cout << "����ʵ�� - ������" << p.name << " ���䣺" << p.age << endl;
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