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
    cout << "Base���캯��!" << endl;
  }
  ~Base()
  {
    cout << "Base��������!" << endl;
  }
  int a;
};

class Sub : public Base
{
public:
  Sub()
  {
    this->a = 200;
    cout << "Sub���캯��!" << endl;
  }
  ~Sub()
  {
    cout << "Sub��������!" << endl;
  }
  int a;
};

void test01()
{
  Sub sub = Sub();
  cout << "Base�µ�46_多态应用_制作饮品: " << sub.Base::a << endl;
}

int main(int argc, char const *argv[])
{
  test01();
  return 0;
}
