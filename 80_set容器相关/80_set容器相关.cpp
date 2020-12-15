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
  set<int> s1;
  // 插入只有insert方式
  s1.insert(20);
  s1.insert(10);
  s1.insert(40);
  s1.insert(30);
  // 遍历元素
  // set容器特点：所有元素插入时自动被排序
  // set容器不允许插入重复值
  printSet(s1);
  // 拷贝构造
  set<int> s2 = s1;
  printSet(s2);
  // 大小
  cout << "当前set s1的大小为：" << s1.size() << endl;
  // 是否为空
  if (!s1.empty()) {
    cout << "s1不为空" << endl;
  } else {
    cout << "s1为空" << endl;
  }
  // 交换
  s2.insert(100);
  s2.insert(200);
  s2.insert(300);
  s1.swap(s2);
  cout << "交换前：" << endl;
  cout << "s1 -> " << endl;
  printSet(s1);
  cout << "s2 -> " << endl;
  printSet(s2);
  cout << "交换后：" << endl;
  cout << "s1 -> " << endl;
  printSet(s1);
  cout << "s2 -> " << endl;
  printSet(s2);
}

// 插入和删除操作
void test02() {
  set<int> s1;
  // 插入只有insert方式
  s1.insert(20);
  s1.insert(10);
  s1.insert(40);
  s1.insert(30);
  printSet(s1);
  // 删除
  s1.erase(s1.begin());
  printSet(s1);
  s1.erase(40);
  printSet(s1);
  // 清空
  // s1.erase(s1.begin(), s1.end())
  s1.clear();
}

// 查找和统计
void test03() {
  set<int> s1;
  // 插入只有insert方式
  s1.insert(20);
  s1.insert(10);
  s1.insert(40);
  s1.insert(30);
  s1.insert(30);
  printSet(s1);
  // find()返回迭代器，不存在则返回s1.end()
  set<int>::iterator pos = s1.find(10);
  if (pos != s1.end()) {
    cout << "找到元素！" << *pos << endl;
  } else {
    cout << "未找到元素" << endl;
  }
  // 统计某个元素的个数，对于set而言，返回的要么是0，要么是1
  int num = s1.count(30);
  cout << "num of 30=" << num << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
  test03();
  system("pause");
  return 0;
}