//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> &v) {
  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

void test01() {
  vector<int> v;
  // ����reserveԤ���ռ�
  v.reserve(100000);
  int num = 0; // ͳ�����¿����ڴ����
  int *p = NULL;
  for (int i = 0; i < 100000; ++i) {
    v.push_back(i);
    if (p != &v[0]) {
      p = &v[0];
      num++;
    }
  }
  cout << "num=" << num << endl;  // ��Ԥ���ռ䣬���¿���20���ҴΣ�Ԥ��100000�󣬽��迪��1��
}

int main() {
  test01();
  system("pause");
  return 0;
}