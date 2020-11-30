#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Person
{
public:
  int m_age;
  int *m_height;
  Person()
  {
    // cout << "�޲ι��캯��������" << endl;
  }
  Person(int age, int height)
  {
    m_age = age;
    m_height = new int(height);
    // cout << "�вι��캯��������" << endl;
  }
  Person(const Person &p)
  {
    // ***** ����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ�������������� *****
    m_age = p.m_age;
    m_height = new int(*p.m_height);
    // cout << "�������캯��������" << endl;
  }
  ~Person()
  {
    if (m_height != NULL)
    {
      delete m_height;
      m_height = NULL; // ����Ұָ��ĳ���
    }
    cout << "��������������" << endl;
  }
};

int main(int argc, char const *argv[])
{
  Person p1(18, 160);
  Person p2(p1);
  // ע�� ��Ա���� . ���ȼ� ���� ������ *
  cout << "age of p1: " << p1.m_age << "height of p1: " << *p1.m_height << endl;
  cout << "age of p2: " << p2.m_age << "height of p2: " << *p2.m_height << endl;
  return 0;
}
