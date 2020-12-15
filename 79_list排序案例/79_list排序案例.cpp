//
// Created by Administrator on 2020/12/14.
//

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

class Person {
public:
  string name;
  int age;
  int height;

  Person(string name, int age, int height) {
    this->name = name;
    this->age = age;
    this->height = height;
  }
};

void printList(const list<Person> &L){
  for (list<Person>::const_iterator iter = L.begin(); iter != L.end(); iter++) {
    cout << "姓名:" << (*iter).name << " 年龄：" << (*iter).age << " 身高：" << (*iter).height << endl;
  }
}

bool myCompare(Person &p1, Person &p2){
  // 按照年龄升序
  if (p1.age == p2.age) {
    // 年龄相同，则按身高降序
    return p1.height > p2.height;
  }
  return p1.age < p2.age;
}

void test01(){
  list<Person> L;
  // 准备数据
  Person p1("李丹", 22, 163);
  Person p2("石怀钰", 22, 159);
  Person p3("顾佳清", 20, 168);
  Person p4("xkf", 22, 170);
  Person p5("coderwhy", 30, 170);
  L.push_back(p1);
  L.push_back(p2);
  L.push_back(p3);
  L.push_back(p4);
  L.push_back(p5);
  printList(L);
  // 排序
  cout << "---------------" << endl;
  cout << "排序后:" << endl;
  L.sort(myCompare);
  printList(L);
}

int main(int argc, const char *argv[]){
  test01();
  system("pause");
  return 0;
}