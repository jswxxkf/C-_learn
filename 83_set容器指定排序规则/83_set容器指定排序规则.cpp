//
// Created by Administrator on 2020/12/14.
//

#include <iostream>
#include <string>
#include <set>
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

// 包含仿函数的自定义数据类型
class MyCompare {
public:
  bool operator()(int v1, int v2) {
    return v1 > v2;
  }
};

class MyPersonCompare {
public:
  bool operator()(const Person &p1, const Person &p2) {
    return p1.age > p2.age;
  }
};

void printSet(const set<int> &s) {
  for (set<int>::const_iterator iter = s.begin(); iter != s.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

void test01() {
  set<int> s1;
  // 插入只有insert方式
  s1.insert(10);
  s1.insert(40);
  s1.insert(20);
  s1.insert(50);
  s1.insert(30);
  // 遍历元素
  // set容器特点：所有元素插入时自动被排序
  // set容器不允许插入重复值
  printSet(s1);
  // 指定排序规则为从大到小
  set<int, MyCompare> s2;
  // 插入只有insert方式
  s2.insert(10);
  s2.insert(40);
  s2.insert(20);
  s2.insert(50);
  s2.insert(30);
  for (set<int, MyCompare>::iterator iter = s2.begin(); iter != s2.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

// 测试自定义数据类型的排序规则修改
void test02() {
  // 自定义数据类型，都必须指定其排序规则
  set<Person, MyPersonCompare> s1;
  Person p1("李丹", 19);
  Person p2("coderwhy", 32);
  Person p3("xkf", 24);
  Person p4("石怀钰", 18);
  Person p5("顾佳清", 23);
  s1.insert(p1);
  s1.insert(p2);
  s1.insert(p3);
  s1.insert(p4);
  s1.insert(p5);
  for (set<Person, MyPersonCompare>::iterator iter = s1.begin(); iter != s1.end(); iter++) {
    cout << "姓名：" << iter->name << " 年龄：" << iter->age << endl;
  }
}

int main(int argc, const char *argv[]) {
//  test01();
  test02();
  system("pause");
  return 0;
}