//
// Created by Administrator on 2020/12/14.
//

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void test01() {
  // �������鷽ʽ1
  pair<string, int> p("tom", 20);
  cout << "������" << p.first << " ���䣺" << p.second << endl;
  // �������鷽ʽ2
  pair<string, int> p2 = make_pair("jerry", 19);
  cout << "������" << p2.first << " ���䣺" << p2.second << endl;
}

int main() {
  test01();
  system("pause");
  return 0;
}