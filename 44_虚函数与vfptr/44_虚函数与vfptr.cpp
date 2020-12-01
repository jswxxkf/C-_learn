#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 动态多态满足条件：
// 1. 有继承关系
// 2. 子类重写父类的虚函数 子类重写时，virtual可加可不加

// 动态多态使用场景：
// 父类的指针或者引用指向子类对象(地址晚绑定)
class Animal
{
public:
  virtual void speak()
  {
    cout << "动物在说话" << endl;
  }
};

class Dog : public Animal
{
public:
  virtual void speak()
  {
    cout << "狗在叫" << endl;
  }
};

class Cat : public Animal
{
public:
  virtual void speak()
  {
    cout << "猫在叫" << endl;
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
