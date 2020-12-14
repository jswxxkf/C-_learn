//
// Created by 29024 on 2020/12/14.
//

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

void printList(const list<int> &L) {
  for (list<int>::const_iterator iter = L.begin(); iter != L.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

// 构造函数相关
void test01() {
  // 创建list容器
  list<int> L1;
  // 添加数据
  L1.push_back(10);
  L1.push_back(20);
  L1.push_back(30);
  L1.push_back(40);
  // 遍历容器
  printList(L1);
  // 区间方式构造
  list<int> L2(L1.begin(), L1.end());
  printList(L2);
  // 拷贝构造
  list<int> L3(L2);
  printList(L3);
  // n个elem构造
  list<int> L4(10, 100);
  printList(L4);
}

void test02(){
  // 赋值和交换
  list<int> L1;
  L1.push_back(10);
  L1.push_back(20);
  L1.push_back(30);
  L1.push_back(40);
  printList(L1);
  // 赋值操作
  list<int> L2;
  L2 = L1;
  printList(L2);
  list<int> L3;
  L3.assign(L2.begin(), L2.end());
  printList(L3);
  list<int> L4;
  L4.assign(10, 100);
  printList(L4);
  // 交换操作
  cout << "交换后L3与L4：" << endl;
  L3.swap(L4);
  cout << "L3 -> ";
  printList(L3);
  cout << "L4 -> ";
  printList(L4);
  // 大小操作
  cout << "L4的大小为：" << L4.size() << endl;
  // 判断是否为空
  if (!L4.empty()) {
    cout << "L4不为空" << endl;
  } else {
    cout << "L4为空" << endl;
  }
  // 重新制定大小
  L4.resize(12);
  cout << "重新指定大小后：" << endl;
  cout << "L4的大小为：" << L4.size() << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
//  test03();
  system("pause");
  return 0;
}