//
// Created by 29024 on 2020/12/2.
//
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void test01() {
  ifstream ifs = ifstream();
  ifs.open("demo.txt", ios::in);
  if (!ifs.is_open()) {
    cout << "文件打开失败！" << endl;
    return;
  }
  // 开始读数据
  char buffer[1024] = {0};
  // 法1
  while (ifs >> buffer) {  // 读到文件末尾，即返回一个类false值
    cout << buffer << endl;
  }
  // 法2
//  while (ifs.getline(buffer, sizeof(buffer))) {
//    cout << buffer << endl;
//  }
//  // 法3
//  string buf;
//  while (getline(ifs, buf)) {
//    cout << buffer << endl;
//  }
//  // 法4
//  char c;
//  while ((c = ifs.get()) != EOF) {
//    cout << c;
//  }
  ifs.close();
}

int main() {
  test01();
  system("pause");
  return 0;
}
