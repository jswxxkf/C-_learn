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

void test02() {
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

void test03() {
  list<int> L;
  // 尾插
  L.push_back(10);
  L.push_back(20);
  L.push_back(30);
  // 头插
  L.push_front(100);
  L.push_front(200);
  L.push_front(300);
  printList(L);
  // 尾删
  L.pop_back();
  printList(L);
  // 头删
  L.pop_front();
  printList(L);
  // insert插入
  // L.insert(L.begin(), 1000);
  // printList(L);
  list<int>::iterator iter = L.begin();
  L.insert(++iter, 1000);
  printList(L);
  // 删除
  iter = L.begin();
  L.erase(iter);
  printList(L);
  // 移除
  L.push_back(10000);
  printList(L);
  L.remove(10000);
  printList(L);
  // 清空
  L.clear();
  printList(L);
}

bool myCompare(int v1,int v2){
  // 降序，就让第一个数 > 第二个数
  return v1 > v2;
}

// 数据存取、反转和排序
void test04() {
  list<int> L;
  L.push_back(10);
  L.push_back(20);
  L.push_back(30);
  L.push_back(40);
  L.push_front(100);
  L.push_front(200);
  L.push_front(300);
  // list底层是链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问的
  // L[0] // 无法用[]访问list容器中的元素
  // L.at(0) // 也无法用at(ind)
  cout << "第一个元素为：" << L.front() << endl;
  cout << "最后一个元素为：" << L.back() << endl;
  // 迭代器是不支持随机访问的
  list<int>::iterator iter = L.begin();
  // iter = iter + 2 // 无法跳跃，只能双向的++ --
  // 反转
  cout << "反转前：" << endl;
  printList(L);
  L.reverse();
  cout << "反转后：" << endl;
  printList(L);
  // 排序
  // 注意：所有不支持随机访问迭代器的容器，不可用标准算法来包裹
  // 但是，不支持随机访问迭代器容器的内部，会提供对应的一些算法
  L.sort(); // 默认排序规则
  cout << "升序排序后：" << endl;
  printList(L);
  cout << "降序排序后：" << endl;
  L.sort(myCompare); // 自定义的降序排序
  printList(L);
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
//  test03();
  test04();
  system("pause");
  return 0;
}