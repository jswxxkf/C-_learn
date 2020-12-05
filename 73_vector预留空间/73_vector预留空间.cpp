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
  // 利用reserve预留空间
  v.reserve(100000);
  int num = 0; // 统计重新开辟内存次数
  int *p = NULL;
  for (int i = 0; i < 100000; ++i) {
    v.push_back(i);
    if (p != &v[0]) {
      p = &v[0];
      num++;
    }
  }
  cout << "num=" << num << endl;  // 不预留空间，重新开辟20左右次，预留100000后，仅需开辟1次
}

int main() {
  test01();
  system("pause");
  return 0;
}