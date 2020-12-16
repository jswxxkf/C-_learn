//
// Created by 29024 on 2020/12/16.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>

using namespace std;

void myPrint(int val) {
  cout << val << " ";
}

// random_shuffle 洗牌 reshuffle one's life
void test01() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }
  random_shuffle(v.begin(), v.end());
  for_each(v.begin(), v.end(), myPrint);
}

// merge  合并两个容器至一个新的容器(原容器必须是一个有序序列容器，合并后同样保持有序)
void test02() {
  vector<int> v1;
  vector<int> v2;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
    v2.push_back(i + 1);
  }
  vector<int> vTarget;
  // *** 需要提前给目标容器分配空间 否则程序崩溃 ***
  vTarget.resize(v1.size() + v2.size());
  merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
  for_each(vTarget.begin(), vTarget.end(), myPrint);
  cout << endl;
}

// reverse 反转容器元素
void test03() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }
  reverse(v.begin(), v.end());
  for_each(v.begin(), v.end(), myPrint);
  cout << endl;
}

int main(int argc, const char *argv[]) {
  srand((unsigned int) time(NULL));
//  test01();
//  test02();
  test03();
  system("pause");
  return 0;
}