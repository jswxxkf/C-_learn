#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Person
{
public:
  Person(int age)
  {
    // this指针指向的是被调用的成员函数所属的对象
    this->age = age;
  }
  int age;
  Person &addAge(Person &p)
  {
    this->age += p.age;
    return *this; // 返回指向的对象本体
  }
};

void test01()
{
  Person p1 = Person(18);
  cout << "age of p1:" << p1.age << endl;
}

void test02()
{
  Person p1 = Person(10);
  Person p2 = Person(10);
  // 实现链式编程思想
  p2.addAge(p1).addAge(p1).addAge(p1);
  cout << "age of p2: " << p2.age << endl;
}

int main(int argc, char const *argv[])
{
  test02();
  return 0;
}
