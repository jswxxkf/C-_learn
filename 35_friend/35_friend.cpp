#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// *** ��Ԫ friend ***

class GoodGay
{
public:
  GoodGay();
  Building *building;
  void visit(); // �ιۺ��� ����Building�е�����
};

class Building
{
  // goodGayȫ�ֺ�����Building�ĺ����ѣ����Է���˽�г�Ա
  // friend void goodGay(Building &building);
  // ������Ԫ
  // friend class GoodGay;
  // ��Ա��������Ԫ
  friend void GoodGay::visit();

public:
  string sittingRoom;
  Building();

private:
  string bedroom;
};

Building::Building()
{
  sittingRoom = "����";
  bedroom = "����";
}

GoodGay::GoodGay()
{
  // ��������building����
  building = new Building;
}

void GoodGay::visit()
{
  cout << "�û��������ڷ���:" << building->sittingRoom << endl;
  cout << "�û��������ڷ���:" << building->bedroom << endl;
}

// ȫ�ֺ���
void goodGay(Building &building)
{
  cout << "�û��ѵ�ȫ�ֺ������ڷ���:" << building.sittingRoom << endl;
  // cout << "�û��ѵ�ȫ�ֺ������ڷ���:" << building.bedroom << endl;
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
