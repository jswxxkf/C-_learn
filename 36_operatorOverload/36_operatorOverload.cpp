#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Person
{
public:
  int m_a;
  int m_b;
  string name;
  Person(string name = "temp")
  {
    this->name = name;
  }
  Person(int m_a, int m_b, string name)
  {
    this->m_a = m_a;
    this->m_b = m_b;
    this->name = name;
  }
  ~Person()
  {
    cout << "Person: " << (this->name) << "析构函数被调用" << endl;
  }
  // 通过成员函数重载了‘+’号运算符
  // Person operator+(Person &p)
  // {
  //   Person temp = Person();
  //   temp.m_a = this->m_a + p.m_a;
  //   temp.m_b = this->m_b + p.m_b;
  //   return temp;
  // }
};

// 通过全局函数重载加号
Person operator+(Person &p1, Person &p2)
{
  Person temp = Person();
  temp.m_a = p1.m_a + p2.m_a;
  temp.m_b = p1.m_b + p2.m_b;
  return temp;
}

Person operator+(Person &p, int num)
{
  Person temp = Person();
  temp.m_a = p.m_a + num;
  temp.m_b = p.m_b + num;
  return temp;
}

void test01()
{
  Person p1 = Person(10, 10, "p1");
  Person p2 = Person(10, 10, "p2");
  // 成员函数重载本质调用：
  // Person p3 = p1.operator+(p2);
  // 全局函数重载本质调用：
  // Person p3 = operator+(p1, p2);
  Person p3 = p1 + p2;
  cout << "p3.m_a=" << p3.m_a << endl;
  cout << "p3.m_b=" << p3.m_b << endl;
  Person p4 = p3 + 100;
  cout << "p4.m_a=" << p4.m_a << endl;
  cout << "p4.m_b=" << p4.m_b << endl;
  system("pause");
}

int main(int argc, char const *argv[])
{
  test01();
  return 0;
}
