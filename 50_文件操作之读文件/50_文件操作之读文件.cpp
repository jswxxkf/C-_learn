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
    cout << "�ļ���ʧ�ܣ�" << endl;
    return;
  }
  // ��ʼ������
  char buffer[1024] = {0};
  // ��1
  while (ifs >> buffer) {  // �����ļ�ĩβ��������һ����falseֵ
    cout << buffer << endl;
  }
  // ��2
//  while (ifs.getline(buffer, sizeof(buffer))) {
//    cout << buffer << endl;
//  }
//  // ��3
//  string buf;
//  while (getline(ifs, buf)) {
//    cout << buffer << endl;
//  }
//  // ��4
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
