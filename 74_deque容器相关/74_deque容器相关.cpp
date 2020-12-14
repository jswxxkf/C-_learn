//
// Created by 29024 on 2020/12/6.
//

#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

void printDeque(const deque<int> &deq){
  for (deque<int>::const_iterator iter = deq.begin(); iter != deq.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

void test01(){
  deque<int> deq1 = deque<int>();  // 默认构造
  deque<int> deq2 = deque<int>(5, 100); // n个elem构造
  deque<int> deq3 = deque<int>(deq2); // 拷贝构造
  // 双端添加数据 底层原理为中间缓存非连续首地址+首地址对应的连续空间，故没有容量这一概念（无需扩容，按需存放）
  // deque的添加删除元素效率比vector高，而vector的搜索访问效率比deque高
  deq1.push_back(10);
  deq1.push_back(20);
  deq1.push_back(30);
  deq1.push_front(100);
  deq1.push_front(200);
  deq1.push_front(300);
  // 插入元素
  deq1.insert(deq1.begin(), 88);
  printDeque(deq1);
  deq1.insert(deq1.begin(), deq2.begin(), deq2.end());
  printDeque(deq1);
  // 删除元素
  deq1.erase(deq1.begin());
  printDeque(deq1);
  // 清空元素
  // deq1.clear();  // 法1
  // deq1.erase(deq1.begin(), deq1.end());  // 法2
  // 获取大小
  cout << "当前deq1的大小为:" << deq1.size() << endl;
  // 数据存取：不再赘述 [] 或 at
  // deque排序
  // 对于支持随机访问迭代器的容器，都可以利用sort算法直接对其进行排序
  sort(deq1.begin(), deq1.end());
  cout << "排序后：" << endl;
  printDeque(deq1);
}

int main(int argc, const char *argv[]){
  test01();
  system("pause");
  return 0;
}