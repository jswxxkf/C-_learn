//
// Created by 29024 on 2020/12/16.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void myPrint(int val) {
  cout << val << " ";
}

// 常用集合算法
// 交集 set_intersection
void test01() {
  vector<int> v1;
  vector<int> v2;
  vector<int> vTarget;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
    v2.push_back(i + 5);
  }
  // 重点：vTarget如何开辟空间？ 取v1和v2大小的最小值(最极端情况)
  vTarget.resize(min(v1.size(), v2.size()));
  // set_intersection返回交集的结束迭代器
  vector<int>::iterator iterEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
  cout << "v1与v2的交集：" << endl;
  for_each(vTarget.begin(), iterEnd, myPrint);
  cout << endl;
}

// set_union 并集
void test02() {
  vector<int> v1;
  vector<int> v2;
  vector<int> vTarget;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
    v2.push_back(i + 5);
  }
  vTarget.resize(v1.size() + v2.size());
  vector<int>::iterator iterEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
  cout << "v1与v2的并集：" << endl;
  for_each(vTarget.begin(), iterEnd, myPrint);
  cout << endl;
}

// set_difference 差集 要看是v1和v2差集 还是v2和v1差集
void test03() {
  vector<int> v1;
  vector<int> v2;
  vector<int> vTarget;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
    v2.push_back(i + 5);
  }
  // 分配新集合容器的空间 考虑最极端情况，要去两个原容器中大的那个作为新容器的空间
  vTarget.resize(max(v1.size(), v2.size()));
  vector<int>::iterator iterEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
  cout << "v1与v2的差集：" << endl;
  for_each(vTarget.begin(), iterEnd, myPrint);
  cout << endl;
  iterEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
  cout << "v2与v1的差集：" << endl;
  for_each(vTarget.begin(), iterEnd, myPrint);
  cout << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
  test03();
  system("pause");
  return 0;
}