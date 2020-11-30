#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Phone
{
public:
  Phone(string name) : m_pName(name)
  {
    cout << "Phone的构造函数调用" << endl;
  }
  ~Phone()
  {
    cout << "Phone的析构函数调用" << endl;
  }
  string m_pName;
};

class Person
{
public:
  // Phone m_phone = pName; 隐式转换法
  Person(string name, string pName) : m_name(name), m_phone(pName)
  {
    cout << "Person的构造函数调用" << endl;
  }
  ~Person()
  {
    cout << "Person的析构函数调用" << endl;
  }
  string m_name;
  Phone m_phone;
};

int main(int argc, char const *argv[])
{
  // 构造函数执行顺序：Phone() -> Person()
  // 析构函数执行顺序与之相反
  Person p = Person("xkf", "mi");
  cout << p.m_name << "拿着：" << p.m_phone.m_pName << endl;
  return 0;
}
