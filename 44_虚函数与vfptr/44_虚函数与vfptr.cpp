#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// ��̬��̬����������
// 1. �м̳й�ϵ
// 2. ������д������麯�� ������дʱ��virtual�ɼӿɲ���

// ��̬��̬ʹ�ó�����
// �����ָ���������ָ���������(��ַ���)
class Animal
{
public:
  virtual void speak()
  {
    cout << "������˵��" << endl;
  }
};

class Dog : public Animal
{
public:
  virtual void speak()
  {
    cout << "���ڽ�" << endl;
  }
};

class Cat : public Animal
{
public:
  virtual void speak()
  {
    cout << "è�ڽ�" << endl;
  }
};

void doSpeak(Animal &animal)
{
  animal.speak();
}

int main(int argc, char const *argv[])
{
  Cat cat = Cat();
  doSpeak(cat);
  system("pause");
  return 0;
}
