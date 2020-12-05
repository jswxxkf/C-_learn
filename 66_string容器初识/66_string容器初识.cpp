//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// string 的构造函数
void test01() {
  string s1 = string(); // 默认的构造
  const char *str = "hello cpp";
  string s2 = string(str); // 传入指向字符串的char指针(C语言)的构造
  cout << "s2=" << s2 << endl;
  string s3 = string(s2); // 传入字符串构造
  cout << "s3=" << s3 << endl;
  string s4 = string(10, 'a'); // 传入某个字符及其个数的构造
  cout << "s4=" << s4 << endl;
}

int main() {
  test01();
  return 0;
}