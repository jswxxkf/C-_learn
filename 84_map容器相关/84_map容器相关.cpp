//
// Created by 29024 on 2020/12/15.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

void printMap(map<int, int> &m) {
  for (map<int, int>::iterator iter = m.begin(); iter != m.end(); iter++) {
    cout << "key = " << (*iter).first << ", val = " << (*iter).second << endl;
  }
}

void test01() {
  // 构造和赋值
  map<int, int> m;
  // 默认按照key值升序排序
  m.insert(pair<int, int>(1, 10));
  m.insert(pair<int, int>(3, 30));
  m.insert(pair<int, int>(2, 20));
  m.insert(pair<int, int>(4, 40));
  printMap(m);
  // 拷贝构造
  map<int, int> m2(m);
  printMap(m2);
  // 赋值(注意没有assign方法了)
  map<int, int> m3;
  m3 = m2;
  printMap(m3);
  // 判断是否为空
  if (!m.empty()) {
    cout << "m不为空" << endl;
    cout << "m的大小为：" << m.size() << endl;
  }
  m2.insert(make_pair(6, 60));
  // 交换
  cout << "交换前：" << endl;
  cout << "m2 -> " << endl;
  printMap(m2);
  cout << "m3 -> " << endl;
  printMap(m3);
  cout << "交换后：" << endl;
  m2.swap(m3);
  cout << "m2 -> " << endl;
  printMap(m2);
  cout << "m3 -> " << endl;
  printMap(m3);
  // 删除元素
  cout << "----------" << endl;
  m3.erase(m3.begin());
  printMap(m3);
  cout << "----------" << endl;
  m3.erase(6);  // 删除指定key对应的pair
  printMap(m3);
  // 清空
  // m3.erase(m3.begin(), m3.end());
  m3.clear();
  printMap(m3);
}

// 查找和统计
void test02() {
  map<int, int> m;
  // 默认按照key值升序排序
  m.insert(pair<int, int>(1, 10));
  m.insert(pair<int, int>(3, 30));
  m.insert(pair<int, int>(2, 20));
  m.insert(pair<int, int>(4, 40));
  printMap(m);
  map<int, int>::iterator pos = m.find(1);
  if (pos != m.end()) {
    cout << "查到了元素：" << (*pos).first << " value = " << pos->second << endl;
  } else {
    cout << "未找到元素" << endl;
  }
  // 统计(对于统计而言，结果要么是0，要么是1) 而multimap的count统计返回值可以大于1
  int num = m.count(3);
  cout << "key为3的元素的个数为" << num << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
  test02();
  system("pause");
  return 0;
}