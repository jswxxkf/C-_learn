//
// Created by 29024 on 2020/12/2.
//
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person {
public:
  char name[64]; // 姓名
  int age; // 年龄
};

void test01() {
  ifstream ifs = ifstream();
  ifs.open("person.txt", ios::in | ios::binary);
  if (!ifs.is_open()) {
    cout << "文件打开失败！" << endl;
    return;
  }
  // 读文件
  Person p = Person();
  ifs.read((char *) &p, sizeof(Person));
  cout << "姓名：" << p.name;
  cout << "年龄：" << p.age;
}

int main() {
  test01();
  system("pause");
  return 0;
}