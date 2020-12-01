#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Base
{
public:
  // 纯虚函数
  // 只要有一个纯虚函数，这个类就称为抽象类
  // 抽象类无法实例化对象
  // 子类必须重写父类的纯虚函数，否则自身也属于抽象类
  virtual void func() = 0;
};

class Son : public Base
{
public:
  virtual void func()
  {
    cout << "func invoked." << endl;
  }
};

void test01()
{
  Base *base = new Son;
  base->func();
}

int main(int argc, char const *argv[])
{
  test01();
  return 0;
}
