#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class MyPrint
{
public:
  void operator()(string test)
  {
    cout << test << endl;
  }
};

class MyAdd
{
public:
  int operator()(int num1, int num2)
  {
    return num1 + num2;
  }
};

void test01()
{
  MyPrint myPrint = MyPrint();
  myPrint("hello world"); // 注意此处括号的颜色，只是类似于函数调用，故称为仿函数
}

void test02()
{
  MyAdd add = MyAdd();
  int res = add(100, 200);
  cout << "result=" << res << endl;
  // 匿名函数对象
  cout << "result2=" << MyAdd()(200, 300) << endl;
}

int main(int argc, char const *argv[])
{
  // test01();
  test02();
  return 0;
}
