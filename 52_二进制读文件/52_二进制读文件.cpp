//
// Created by 29024 on 2020/12/2.
//
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person {
public:
  char name[64]; // ����
  int age; // ����
};

void test01() {
  ifstream ifs = ifstream();
  ifs.open("person.txt", ios::in | ios::binary);
  if (!ifs.is_open()) {
    cout << "�ļ���ʧ�ܣ�" << endl;
    return;
  }
  // ���ļ�
  Person p = Person();
  ifs.read((char *) &p, sizeof(Person));
  cout << "������" << p.name;
  cout << "���䣺" << p.age;
}

int main() {
  test01();
  system("pause");
  return 0;
}