//
// Created by Administrator on 2020/12/2.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//1. �����ͨ�����ͺ���ģ�嶼���Ե��ã������ȵ�����ͨ����
//2. ����ͨ����ģ������б� ǿ�Ƶ��ú���ģ��
//3. ����ģ����Է�����������
//4. �������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
void myPrint(int a, int b) {
  cout << "������ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b) {
  cout << "���ú���ģ��" << endl;
}

template<class T>
void myPrint(T a, T b, T c) {
  cout << "���ú���ģ��" << endl;
}

void test01() {
  int a = 10;
  int b = 20;
  // ������ͨ����
  myPrint(a, b);
  // ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
  myPrint<>(a, b);
  // �������صĺ���ģ��
  myPrint(a, b, 100);
  // ����ģ��������õ�ƥ�� ���ȵ��ú���ģ��
  char c1 = 'a';
  char c2 = 'b';
  myPrint(c1, c2);
}

int main() {
  test01();
  system("pause");
  return 0;
}