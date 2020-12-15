//
// Created by 29024 on 2020/12/15.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// ����bool���͵ķº�����Ϊν�� (predicate)
class GreaterFive {
public:
  bool operator()(int val) {
    return val > 5;
  }
};

void test01() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }
  // ���������� ��û�д���5�Ĺؼ���
  // GreaterFive() ������������
  vector<int>::iterator iter = find_if(v.begin(), v.end(), GreaterFive());
  if (iter == v.end()) {
    cout << "δ�ҵ�" << endl;
  } else {
    cout << "�ҵ��˴���5������Ϊ��" << *iter << endl;
  }
}

int main(int argc, const char *argv[]) {
  test01();
  system("pause");
  return 0;
}