#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Person
{
public:
  Person()
  {
    cout << "�޲ι��캯��������" << endl;
  }
  Person(int a)
  {
    cout << "�вι��캯��������" << endl;
  }
  Person(const Person &p)
  {
    cout << "�������캯��������" << endl;
  }
  ~Person()
  {
    cout << "��������������" << endl;
  }
};

int main(int argc, char const *argv[])
{
  // 1. ���ŷ�
  // Person p1;
  // Person p1(); // ��Ҫ����д ����������Ϊ���Ǻ���������
  // Person p2(10);
  // Person p3(p2); // �������캯��
  // 2. ��ʽ��
  Person p1 = Person();
  Person p2 = Person(10);
  Person p3 = Person(p2);
  Person(10); // ��ǰ��ִ�н�����ϵͳ���������յ���������
  // Person(p3);  // ��Ҫ���ÿ������캯�� ��ʼ���������� ����������ΪPerson(p3)===Person p3; ���ض�������������
  // 3. ��ʽת����
  Person p4 = 10; // �൱��д��Person p4 = Person(10);
  Person p5 = p4; // ��������
  return 0;
}
