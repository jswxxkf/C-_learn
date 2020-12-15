//
// Created by 29024 on 2020/12/15.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// 二元谓词 仿函数重载参数有两个
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
  // 使用函数对象，改变算法策略，变为排序规则从大到小 第三个参数为 匿名predicate
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