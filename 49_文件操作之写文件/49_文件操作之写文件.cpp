//
// Created by 29024 on 2020/12/2.
//
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
 * �����ļ��������ࣺ
 * ofstream: д����
 * ifstream: ������
 * fstream: ��д����
 * */
void test01() {
  //  ����������
  ofstream ofs = ofstream();
  // ָ���򿪷�ʽ
  ofs.open("demo.txt", ios::out);
  // д����
  ofs << "������lidan" << endl;
  ofs << "�Ա�Ů" << endl;
  ofs << "���䣺19" << endl;
  // �ر�������
  ofs.close();
}

int main(int argc, const char *argv[]) {
  test01();
  system("pause");
  return 0;
}