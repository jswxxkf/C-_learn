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
    cout << "����:" << (*iter).name << " ���䣺" << (*iter).age << " ��ߣ�" << (*iter).height << endl;
  }
}

bool myCompare(Person &p1, Person &p2){
  // ������������
  if (p1.age == p2.age) {
    // ������ͬ������߽���
    return p1.height > p2.height;
  }
  return p1.age < p2.age;
}

void test01(){
  list<Person> L;
  // ׼������
  Person p1("�", 22, 163);
  Person p2("ʯ����", 22, 159);
  Person p3("�˼���", 20, 168);
  Person p4("xkf", 22, 170);
  Person p5("coderwhy", 30, 170);
  L.push_back(p1);
  L.push_back(p2);
  L.push_back(p3);
  L.push_back(p4);
  L.push_back(p5);
  printList(L);
  // ����
  cout << "---------------" << endl;
  cout << "�����:" << endl;
  L.sort(myCompare);
  printList(L);
}

int main(int argc, const char *argv[]){
  test01();
  system("pause");
  return 0;
}