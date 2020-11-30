#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// *** 友元 friend ***

class GoodGay
{
public:
  GoodGay();
  Building *building;
  void visit(); // 参观函数 访问Building中的属性
};

class Building
{
  // goodGay全局函数是Building的好朋友，可以访问私有成员
  // friend void goodGay(Building &building);
  // 类作友元
  // friend class GoodGay;
  // 成员函数作友元
  friend void GoodGay::visit();

public:
  string sittingRoom;
  Building();

private:
  string bedroom;
};

Building::Building()
{
  sittingRoom = "客厅";
  bedroom = "卧室";
}

GoodGay::GoodGay()
{
  // 堆区创建building对象
  building = new Building;
}

void GoodGay::visit()
{
  cout << "好基友类正在访问:" << building->sittingRoom << endl;
  cout << "好基友类正在访问:" << building->bedroom << endl;
}

// 全局函数
void goodGay(Building &building)
{
  cout << "好基友的全局函数正在访问:" << building.sittingRoom << endl;
  // cout << "好基友的全局函数正在访问:" << building.bedroom << endl;
}

void test01()
{
  Building building = Building();
  goodGay(building);
}

int main(int argc, char const *argv[])
{
  test01();
  return 0;
}
