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
  ofstream ofs = ofstream("person.txt", ios::out | ios::binary);
  // ofs.open("person.txt", ios::out | ios::binary);
  // д�ļ�
  Person p = {"wxxkf", 18};
  ofs.write((const char *) &p, sizeof(Person));
  ofs.close();
}

int main() {
  test01();
  system("pause");
  return 0;
}
