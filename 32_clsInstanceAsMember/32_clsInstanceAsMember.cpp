#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Phone
{
public:
  Phone(string name) : m_pName(name)
  {
    cout << "Phone�Ĺ��캯������" << endl;
  }
  ~Phone()
  {
    cout << "Phone��������������" << endl;
  }
  string m_pName;
};

class Person
{
public:
  // Phone m_phone = pName; ��ʽת����
  Person(string name, string pName) : m_name(name), m_phone(pName)
  {
    cout << "Person�Ĺ��캯������" << endl;
  }
  ~Person()
  {
    cout << "Person��������������" << endl;
  }
  string m_name;
  Phone m_phone;
};

int main(int argc, char const *argv[])
{
  // ���캯��ִ��˳��Phone() -> Person()
  // ��������ִ��˳����֮�෴
  Person p = Person("xkf", "mi");
  cout << p.m_name << "���ţ�" << p.m_phone.m_pName << endl;
  return 0;
}
