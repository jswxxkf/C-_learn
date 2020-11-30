#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Person
{
public:
  int m_age;
  Person()
  {
    // cout << "无参构造函数被调用" << endl;
  }
  Person(int age)
  {
    m_age = age;
    // cout << "有参构造函数被调用" << endl;
  }
  Person(const Person &p)
  {
    // cout << "拷贝构造函数被调用" << endl;
  }
  ~Person()
  {
    // cout << "析构函数被调用" << endl;
  }
};

void test01()
{
  Person p1 = Person(20);
  Person p2 = Person(p1);
  cout << "age of p2:" << p2.m_age << endl;
}

void doWork(Person p)
{
}

void test02()
{
  Person p = Person();
  doWork(p);
}

Person doWork2()
{
  Person p1 = Person();
  cout << (int *)&p1 << endl;
  return p1;
}

void test03()
{
  Person p = doWork2();
  cout << (int *)&p << endl;
}

int main(int argc, char const *argv[])
{
  // test01();
  test03();
  return 0;
}
