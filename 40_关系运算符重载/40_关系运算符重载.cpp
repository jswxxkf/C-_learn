#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Person
{
public:
  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  string name;
  int age;
  // 重载==号
  bool operator==(Person &p)
  {
    return this->age == p.age && this->name == p.name;
  }
  bool operator!=(Person &p)
  {
    return !(this->age == p.age && this->name == p.name);
  }
};

void test01()
{
  Person p1 = Person("lidan", 20);
  Person p2 = Person("xkf", 24);
  if (p1 != p2)
  {
    cout << "p1 does not equal to p2" << endl;
  }
  else if (p1 == p2)
  {
    cout << "p1 equals to p2" << endl;
  }
}

int main(int argc, char const *argv[])
{
  test01();
  return 0;
}
