#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Person
{
public:
  // 非静态成员函数中，this指针的本质是：
  // Person * const this;
  // 非静态成员函数右侧加了const后(常函数)，本质是：
  // const Person * const this;
  void showPerson() const
  {
    this->m_b = 100;
  }
  int getA()
  {
    return this->m_a;
  }
  int m_a;
  mutable int m_b; // mutable关键字：即使在常函数中，也可以被修改
};

void test01()
{
  const Person p = Person();
  p.m_b = 100;    // 常对象可以修改mutable成员
  p.showPerson(); // ✔ 常对象只能调用常函数
  // p.getA();       // ✖ 常对象不可调用非 常函数
}

int main(int argc, char const *argv[])
{

  return 0;
}
