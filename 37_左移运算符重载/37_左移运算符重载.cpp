#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Person
{
  friend ostream &operator<<(ostream &cout, Person &p);

public:
  Person(int a, int b)
  {
    this->m_b = a;
    this->m_b = b;
  }

private:
  int m_a;
  int m_b;
  // 不会利用成员函数重载左移运算符 无法实现cout在p的左侧，只能利用全局函数重载左移运算符
  // void operator<<()
  // {
  // }
};

// 返回引用，确保ostream对象只能有一个
ostream &operator<<(ostream &cout, Person &p)
{
  cout << "m_a=" << p.m_a << "m_b=" << p.m_b;
  return cout;
}

void test01()
{
  Person p = Person(10, 10);
  cout << p;
  // 可是如何实现链式编程呢？
  cout << p << endl;
}

int main(int argc, char const *argv[])
{
  test01();
  return 0;
}
