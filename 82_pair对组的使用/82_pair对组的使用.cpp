//
// Created by Administrator on 2020/12/14.
//

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void test01() {
  // 创建对组方式1
  pair<string, int> p("tom", 20);
  cout << "姓名：" << p.first << " 年龄：" << p.second << endl;
  // 创建对组方式2
  pair<string, int> p2 = make_pair("jerry", 19);
  cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
}

int main() {
  test01();
  system("pause");
  return 0;
}