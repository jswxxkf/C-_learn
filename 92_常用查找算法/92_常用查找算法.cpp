//
// Created by Administrator on 2020/12/15.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class Person {
public:
  string name;
  int age;

  Person(string name, int age) : name(name), age(age) {}

  bool operator==(const Person &p) {
    // return this->name == p.name && this->age == p.age;
    return this->age == p.age;
  }
};

class GreaterAge {
public:
  bool operator()(const Person &p) {
    return p.age > 18;
  }
};

// find��find_if
void test01() {
  vector<Person> v;
  Person p1("aaa", 16);
  Person p2("bbb", 15);
  Person p3("ccc", 20);
  Person p4("ddd", 21);
  Person p5("eee", 22);
  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);
  v.push_back(p4);
  v.push_back(p5);
  vector<Person>::iterator iter = find(v.begin(), v.end(), p4);
  if (iter == v.end()) {
    cout << "û���ҵ����Ԫ�أ�" << endl;
  } else {
    cout << "�ҵ�������" << iter->name << endl;
  }
  iter = find_if(v.begin(), v.end(), GreaterAge());
  if (iter == v.end()) {
    cout << "û���ҵ����Ԫ�أ�" << endl;
  } else {
    cout << "�ҵ�������" << iter->name << endl;
  }
}

// ���������ظ�Ԫ��
void test02() {
  vector<int> v;
  v.push_back(0);
  v.push_back(2);
  v.push_back(0);
  v.push_back(1);
  v.push_back(3);
  v.push_back(3);
  v.push_back(2);
  vector<int>::iterator iter = adjacent_find(v.begin(), v.end());
  if (iter == v.end()) {
    cout << "δ�ҵ������ظ�Ԫ��" << endl;
  } else {
    cout << "�ҵ������ظ�Ԫ�أ�" << *iter << endl;
  }
}

// ���ֲ��� ����Ԫ���Ƿ���� binary_search ����***��������***
void test03() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }
  cout << "����������ҵ�Ԫ�أ�" << endl;
  int num;
  cin >> num;
  bool res = binary_search(v.begin(), v.end(), num);
  if (res) {
    cout << "�ҵ�Ԫ��" << endl;
  } else {
    cout << "δ�ҵ�Ԫ��" << endl;
  }
}

// ͳ��Ԫ��
void test04() {
  vector<int> v;
  v.push_back(10);
  v.push_back(40);
  v.push_back(10);
  v.push_back(40);
  v.push_back(40);
  v.push_back(20);
  v.push_back(40);
  int num = count(v.begin(), v.end(), 40);
  cout << "40��Ԫ�ظ���Ϊ��" << num << endl;
  vector<Person> vp;
  Person p1("aaa", 22);
  Person p2("bbb", 22);
  Person p3("ccc", 22);
  Person p4("ddd", 15);
  Person p5("eee", 17);
  Person p("�", 22);
  vp.push_back(p1);
  vp.push_back(p2);
  vp.push_back(p3);
  vp.push_back(p4);
  vp.push_back(p5);
  num = count(vp.begin(), vp.end(), p);
  cout << "���ͬ����˵ĸ���Ϊ��" << num << endl;
  num = count_if(vp.begin(), vp.end(), GreaterAge());
  cout << "�������18�������Ϊ��" << num << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
//  test03();
  test04();
  system("pause");
  return 0;
}