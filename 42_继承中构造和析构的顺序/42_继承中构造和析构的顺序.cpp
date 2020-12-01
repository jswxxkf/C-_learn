#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Base
{
public:
  Base()
  {
    this->a = 100;
    cout << "Base构造函数!" << endl;
  }
  ~Base()
  {
    cout << "Base析构函数!" << endl;
  }
  int a;
};

class Sub : public Base
{
public:
  Sub()
  {
    this->a = 200;
    cout << "Sub构造函数!" << endl;
  }
  ~Sub()
  {
    cout << "Sub析构函数!" << endl;
  }
  int a;
};

void test01()
{
  Sub sub = Sub();
  cout << "Base下的a: " << sub.Base::a << endl;
}

int main(int argc, char const *argv[])
{
  test01();
  return 0;
}
