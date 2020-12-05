//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Person {
public:
  string name;
  int age;

  Person(string name, int age) {
    this->name = name;
    this->age = age;
  }
};

void test01() {
  vector<Person> v = vector<Person>();
  Person p1 = Person("�", 18);
  Person p2 = Person("�˼���", 19);
  Person p3 = Person("xkf", 22);
  Person p4 = Person("coderwhy", 18);
  Person p5 = Person("ʯ����", 18);
  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);
  v.push_back(p4);
  v.push_back(p5);
  // ���������е�����
  for (vector<Person>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << "������" << (*iter).name << "���䣺" << (*iter).age << endl;
  }
}

// ����Զ����������� ָ��
void test02() {
  vector<Person *> v = vector<Person *>();
  Person p1 = Person("�", 18);
  Person p2 = Person("�˼���", 19);
  Person p3 = Person("xkf", 22);
  Person p4 = Person("coderwhy", 18);
  Person p5 = Person("ʯ����", 18);
  v.push_back(&p1);
  v.push_back(&p2);
  v.push_back(&p3);
  v.push_back(&p4);
  v.push_back(&p5);
  for (vector<Person *>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << "������" << (*iter)->name << "���䣺" << (*iter)->age << endl;
  }
}

int main() {
//  test01();
  test02();
  system("pause");
  return 0;
}