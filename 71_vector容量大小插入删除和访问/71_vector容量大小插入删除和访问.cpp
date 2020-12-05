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
  vector<int> v1;  // 默认构造
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
  }
  // 判断是否为空
  if (v1.empty()) {
    cout << "v1为空" << endl;
  } else {
    cout << "v1不为空" << endl;
    // 1. 容量(通常为coderwhy所说的质数[findNextPrime])
    cout << "v1的容量为:" << v1.capacity() << endl;
    // 2. 大小
    cout << "v1的大小为:" << v1.size() << endl;
  }
  // 3. 重新指定大小
  v1.resize(17);
  // v1.resize(17, 100); // 利用重载的版本，指定默认填充值
  printVector(v1); // 如果重新指定的比原来长了，默认用0填充新位置
  v1.resize(5);
  printVector(v1); // 如果重新指定的比原来短了，会删除超出部分的元素

  // 4. 插入和删除
  // 尾删
  v1.pop_back();
  printVector(v1);
  // 插入(注意插入位置参数必须传入*迭代器*)
  v1.insert(v1.begin(), 100);
  printVector(v1);
  v1.insert(v1.begin(), 2, 50);
  printVector(v1);
  // 删除(注意插入位置参数必须传入*迭代器*)
  v1.erase(v1.begin()); // 删除begin位置的元素
  printVector(v1);
  // 5. 清空
  // v1.erase(v1.begin(), v1.end());
  // printVector(v1);
  // v1.clear(); // 清空 - 法2

  // 6. 取出某个元素
  cout << "第2个元素为：" << v1.at(1) << endl;
  cout << "第3个元素为：" << v1[2] << endl;
  cout << "第1个元素为：" << v1.front() << endl;
  cout << "第-1个元素为：" << v1.back() << endl;
}

int main() {
  test01();
  system("pause");
  return 0;
}