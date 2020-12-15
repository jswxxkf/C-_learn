//
// Created by Administrator on 2020/12/14.
//

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void printSet(const set<int> &s) {
  for (set<int>::const_iterator iter = s.begin(); iter != s.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

void test01() {
  set<int> s;
  pair<set<int>::iterator, bool> res = s.insert(10);
  if (res.second) {
    cout << "第一次插入成功" << endl;
  } else {
    cout << "第一次插入失败" << endl;
  }
  res = s.insert(10);
  if (res.second) {
    cout << "第一次插入成功" << endl;
  } else {
    cout << "第一次插入失败" << endl;
  }
  // multiset允许插入重复值
  multiset<int> ms;
  ms.insert(10);
  ms.insert(10);
  for (multiset<int>::iterator iter = ms.begin(); iter != ms.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

int main() {
  test01();
  system("pause");
  return 0;
}