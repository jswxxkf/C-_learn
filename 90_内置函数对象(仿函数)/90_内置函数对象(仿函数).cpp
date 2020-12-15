//
// Created by 29024 on 2020/12/15.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

// 使用内建函数对象，需要引入<functional>头文件
// 算数仿函数
void test01() {
  // negate 一元仿函数 取反仿函数
  negate<int> n;
  cout << n(50) << endl;
  // 二元仿函数 加法
  plus<int> p;
  cout << p(10, 20) << endl;
}

class MyCompare {
public:
  bool operator()(int v1, int v2) {
    return v1 > v2;
  }
};

// 关系仿函数
void test02() {
  // 大于 greater
  vector<int> v;
  v.push_back(10);
  v.push_back(30);
  v.push_back(40);
  v.push_back(20);
  v.push_back(50);
  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
  // 使用自己写的仿函数
  //  sort(v.begin(), v.end(), MyCompare());
  //  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
  //    cout << *iter << " ";
  //  }
  // 使用内建的关系仿函数
  // *** 默认排序规则已经使用了 less<T> 小于内建仿函数 ***
  sort(v.begin(), v.end(), greater<int>());
  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

// 内建逻辑仿函数
void test03() {
  // 逻辑非 logical_not
  vector<bool> v;
  v.push_back(true);
  v.push_back(false);
  v.push_back(true);
  v.push_back(false);
  for (vector<bool>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
  // 利用逻辑非 将容器v搬运到v2中，并执行取反操作
  vector<bool> v2;
  v2.resize(v.size());
  transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
  for (vector<bool>::iterator iter = v2.begin(); iter != v2.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
  test03();
  system("pause");
  return 0;
}