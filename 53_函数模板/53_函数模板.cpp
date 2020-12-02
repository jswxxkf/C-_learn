//
// Created by Administrator on 2020/12/2.
//
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void swapInt(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void swapDouble(double &a, double &b) {
  double temp = a;
  a = b;
  b = temp;
}

//����ģ��
template<typename T>
//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����
void mySwap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

void test01() {
  int a = 10;
  int b = 20;
  swapInt(a, b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  double c = 1.1;
  double d = 2.2;
  swapDouble(c, d);
  cout << "c=" << c << endl;
  cout << "d=" << d << endl;
  // ʹ�ú���ģ������ַ�ʽ
  // 1. �Զ������Ƶ�
  mySwap(a, b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  // 2. ��ʽָ������
  mySwap<int>(a, b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
}

int main() {
  test01();
  system("pause");
  return 0;
}
