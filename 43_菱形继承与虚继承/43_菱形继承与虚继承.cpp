#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Animal
{
public:
  Animal()
  {
  }
  int age;
};

// 使用虚继承解决菱形(钻石)继承问题
// 虚继承后的基类成为虚基类
class Sheep : virtual public Animal
{
};

class Tuo : virtual public Animal
{
};

class SheepTuo : public Sheep, public Tuo
{
};

void test01()
{
  SheepTuo st;
  st.Sheep::age = 100;
  st.Tuo::age = 200;
  cout << "st.Sheep::age = " << st.Sheep::age << endl;
  cout << "st.Tuo::age = " << st.Tuo::age << endl;
}

int main(int argc, char const *argv[])
{
  test01();
  system("pause");
  return 0;
}
