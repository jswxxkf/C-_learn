//
// Created by 29024 on 2020/12/15.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// ��Ԫν�� �º������ز���������
class MyCompare {
public:
  bool operator()(int v1, int v2) {
    return v1 > v2;
  }
};

void test01() {
  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);
  sort(v.begin(), v.end());
  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << endl;
  }
  // ʹ�ú������󣬸ı��㷨���ԣ���Ϊ�������Ӵ�С ����������Ϊ ����predicate
  sort(v.begin(), v.end(), MyCompare());
  cout << "--------------------" << endl;
  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << endl;
  }
}

int main(int argc, const char *argv[]) {
  test01();
  system("pause");
  return 0;
}