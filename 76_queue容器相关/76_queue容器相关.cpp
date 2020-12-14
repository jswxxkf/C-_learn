//
// Created by 29024 on 2020/12/6.
//

#include <iostream>
#include <string>
#include <queue>
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

// FIFO队列 由于只有队头和队尾能够被外界直接访问，故也不支持非质变的遍历操作
void test01() {
  Person p1("李丹", 18);
  Person p2("石怀钰", 19);
  Person p3("xkf", 20);
  Person p4("coderwhy", 30);
  Person p5("顾佳清", 21);
  queue<Person> q = queue<Person>(); // 默认构造
  q.push(p1);
  q.push(p2);
  q.push(p3);
  q.push(p4);
  while (!q.empty()) {
    // 察看队头
    cout << "队头元素---姓名：" << q.front().name << " 年龄：" << q.front().age << endl;
    // 察看队尾
    cout << "队尾元素===姓名：" << q.back().name << " 年龄：" << q.back().age << endl;
    // 队头出队
    q.pop();
  }
  cout << "队列大小为：" << q.size() << endl;
}

int main(int argc, const char *argv[]) {
  test01();
  system("pause");
  return 0;
}