//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void myPrint(int val) {
  cout << val << endl;
}

void test01() {
  vector<int> v = vector<int>();
  // 向容器中插入数据
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  // 通过迭代器访问容器中的数据
  vector<int>::iterator itBegin = v.begin(); // 起始迭代器，指向容器中的第一个元素
  vector<int>::iterator itEnd = v.end();  // 结束迭代器，指向容器中最后一个元素的下一个位置
  // 第一种遍历方式
  while (itBegin != itEnd) {
    cout << *itBegin << endl;
    itBegin++;
  }
  // 第二种遍历方式
  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << endl;
  }
  // 第三种遍历方式 利用STL提供的遍历算法 第三个参数类似于callback
  for_each(v.begin(), v.end(), myPrint);
}

int main() {
  test01();
  system("pause");
  return 0;
}