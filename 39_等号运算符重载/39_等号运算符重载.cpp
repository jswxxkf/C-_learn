#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Person
{
  friend void test01();

public:
  Person(int age)
  {
    this->age = new int(age);
  }
  ~Person()
  {
    if (this->age != NULL)
    {
      delete age;
      age = NULL;
    }
  }
  // 重载赋值运算符
  Person &operator=(Person &p)
  {
    // 编译器是提供浅拷贝
    // this->age = p.age;
    // 应该先判断是否有属性在堆区,若有则先释放干净 然后再进行深拷贝
    if (this->age != NULL)
    {
      delete this->age;
      this->age = NULL;
    }
    // 深拷贝
    this->age = new int(*p.age);
    return *this;
  }

private:
  int *age;
};

void test01()
{
  Person p1 = Person(18);
  Person p2 = Person(20);
  Person p3 = Person(22);
  p3 = p2 = p1;
  cout << "age of p1: " << *p1.age << endl;
  cout << "age of p2: " << *p2.age << endl;
  cout << "age of p3: " << *p3.age << endl;
}

int main(int argc, char const *argv[])
{
  test01();
  system("pause");
  return 0;
  // 退出main函数时,p2中的age指针所指堆区内容会被删除,而析构p1时,这块空间已经无权访问,程序会立刻崩溃
  // 而深拷贝就可以完美解决上述问题（你删你指的堆区区域，我删我指向的堆区区域）
}
