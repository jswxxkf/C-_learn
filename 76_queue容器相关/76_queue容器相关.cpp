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

// FIFO���� ����ֻ�ж�ͷ�Ͷ�β�ܹ������ֱ�ӷ��ʣ���Ҳ��֧�ַ��ʱ�ı�������
void test01() {
  Person p1("�", 18);
  Person p2("ʯ����", 19);
  Person p3("xkf", 20);
  Person p4("coderwhy", 30);
  Person p5("�˼���", 21);
  queue<Person> q = queue<Person>(); // Ĭ�Ϲ���
  q.push(p1);
  q.push(p2);
  q.push(p3);
  q.push(p4);
  while (!q.empty()) {
    // �쿴��ͷ
    cout << "��ͷԪ��---������" << q.front().name << " ���䣺" << q.front().age << endl;
    // �쿴��β
    cout << "��βԪ��===������" << q.back().name << " ���䣺" << q.back().age << endl;
    // ��ͷ����
    q.pop();
  }
  cout << "���д�СΪ��" << q.size() << endl;
}

int main(int argc, const char *argv[]) {
  test01();
  system("pause");
  return 0;
}