#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Person
{
public:
  Person()
  {
    cout << "无参构造函数被调用" << endl;
  }
  Person(int a)
  {
    cout << "有参构造函数被调用" << endl;
  }
  Person(const Person &p)
  {
    cout << "拷贝构造函数被调用" << endl;
  }
  ~Person()
  {
    cout << "析构函数被调用" << endl;
  }
};

int main(int argc, char const *argv[])
{
  // 1. 括号法
  // Person p1;
  // Person p1(); // 不要这样写 编译器会认为这是函数的声明
  // Person p2(10);
  // Person p3(p2); // 拷贝构造函数
  // 2. 显式法
  Person p1 = Person();
  Person p2 = Person(10);
  Person p3 = Person(p2);
  Person(10); // 当前行执行结束后，系统会立即回收掉匿名对象
  // Person(p3);  // 不要利用拷贝构造函数 初始化匿名对象 编译器会认为Person(p3)===Person p3; 即重定义重声明变量
  // 3. 隐式转换法
  Person p4 = 10; // 相当于写了Person p4 = Person(10);
  Person p5 = p4; // 拷贝构造
  return 0;
}
