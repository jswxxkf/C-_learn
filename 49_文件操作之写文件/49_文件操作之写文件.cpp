//
// Created by 29024 on 2020/12/2.
//
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
 * 操作文件的三大类：
 * ofstream: 写操作
 * ifstream: 读操作
 * fstream: 读写操作
 * */
void test01() {
  //  创建流对象
  ofstream ofs = ofstream();
  // 指定打开方式
  ofs.open("demo.txt", ios::out);
  // 写内容
  ofs << "姓名：lidan" << endl;
  ofs << "性别：女" << endl;
  ofs << "年龄：19" << endl;
  // 关闭流对象
  ofs.close();
}

int main(int argc, const char *argv[]) {
  test01();
  system("pause");
  return 0;
}