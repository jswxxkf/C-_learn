#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class MyInteger
{
  friend ostream &operator<<(ostream &cout, MyInteger myInteger);

public:
  MyInteger()
  {
    num = 0;
  }
  // 重载前置++运算符
  // 返回引用是为了保证一直对一个数据进行操作
  MyInteger &operator++()
  {
    // 先将自身的num自增
    this->num++;
    // 再将自身作为返回
    return *this;
  }
  // 重载后置++运算符 int是一个占位参数，可以用于区分前置和后置递增
  MyInteger operator++(int)
  {
    // 先返回结果，后进行递增
    // 先记录当前结果
    MyInteger temp = *this;
    this->num++;
    return temp;
  }

private:
  int num;
};

ostream &operator<<(ostream &cout, MyInteger myInteger)
{
  cout << myInteger.num;
  return cout;
}

void test01()
{
  MyInteger myInteger = MyInteger();
  // cout << myInteger << endl;
  // cout << ++(++myInteger) << endl;
  // cout << myInteger << endl;
  cout << myInteger++ << endl;
  cout << myInteger << endl;
}

int main(int argc, char const *argv[])
{
  test01();
  return 0;
}
