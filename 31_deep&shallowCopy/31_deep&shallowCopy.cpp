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
    // cout << "无参构造函数被调用" << endl;
  }
  Person(int age, int height)
  {
    m_age = age;
    m_height = new int(height);
    // cout << "有参构造函数被调用" << endl;
  }
  Person(const Person &p)
  {
    // ***** 如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题 *****
    m_age = p.m_age;
    m_height = new int(*p.m_height);
    // cout << "拷贝构造函数被调用" << endl;
  }
  ~Person()
  {
    if (m_height != NULL)
    {
      delete m_height;
      m_height = NULL; // 避免野指针的出现
    }
    cout << "析构函数被调用" << endl;
  }
};

int main(int argc, char const *argv[])
{
  Person p1(18, 160);
  Person p2(p1);
  // 注意 成员访问 . 优先级 高于 解引用 *
  cout << "age of p1: " << p1.m_age << "height of p1: " << *p1.m_height << endl;
  cout << "age of p2: " << p2.m_age << "height of p2: " << *p2.m_height << endl;
  return 0;
}
