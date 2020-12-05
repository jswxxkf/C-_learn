//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void test01() {
  // 1.查找
  string s1 = "abcdefg";
  int pos = s1.find("de");
  if (pos == -1) {
    cout << "未找到字符串" << endl;
  } else {
    cout << "找到字符串，pos=" << pos << endl;
  }
  // 2.替换
  string s2 = "abcdefg";
  s2.replace(1, 3, "1111");
  cout << "s2=" << s2 << endl;
  // 3.比较
  string s3 = "bbcdefg";
  if (s2.compare(s3) == 0) {
    cout << "s2等于s3" << endl;
  } else if (s2.compare(s3) < 0) {
    cout << "s2小于s3" << endl;
  } else {
    cout << "s2大于s3" << endl;
  }
}

int main() {
  test01();
  system("pause");
  return 0;
}