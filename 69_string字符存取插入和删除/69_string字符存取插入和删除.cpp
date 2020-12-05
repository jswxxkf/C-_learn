//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void test01() {
  string s1 = "lidan";
  // 1.通过[]访问单个字符
  for (int i = 0; i < s1.size(); ++i) {
    cout << s1[i] << " ";
  }
  cout << endl;
  // 2.通过at方式访问单个字符
  for (int j = 0; j < s1.size(); ++j) {
    cout << s1.at(j) << " ";
  }
  cout << endl;
  // 修改单个字符
  cout << "修改单个字符后：" << endl;
  s1[0] = 'x';
  cout << "s1=" << s1 << endl;
  // 插入
  cout << "插入后：" << endl;
  s1.insert(1, "李丹");
  cout << "s1=" << s1 << endl;
  // 删除
  s1.erase(1, 4);
  cout << "删除后：" << endl;
  cout << "s1=" << s1 << endl;
  // 取子串
  string sub = s1.substr(0, 3);
  cout << "取出的字串：" << endl;
  cout << "substring=" << sub << endl;
}

int main() {
  test01();
  system("pause");
  return 0;
}