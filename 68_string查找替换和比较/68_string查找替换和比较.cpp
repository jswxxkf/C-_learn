//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void test01() {
  // 1.����
  string s1 = "abcdefg";
  int pos = s1.find("de");
  if (pos == -1) {
    cout << "δ�ҵ��ַ���" << endl;
  } else {
    cout << "�ҵ��ַ�����pos=" << pos << endl;
  }
  // 2.�滻
  string s2 = "abcdefg";
  s2.replace(1, 3, "1111");
  cout << "s2=" << s2 << endl;
  // 3.�Ƚ�
  string s3 = "bbcdefg";
  if (s2.compare(s3) == 0) {
    cout << "s2����s3" << endl;
  } else if (s2.compare(s3) < 0) {
    cout << "s2С��s3" << endl;
  } else {
    cout << "s2����s3" << endl;
  }
}

int main() {
  test01();
  system("pause");
  return 0;
}