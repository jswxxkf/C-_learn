//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// string �Ĺ��캯��
void test01() {
  string s1 = string(); // Ĭ�ϵĹ���
  const char *str = "hello cpp";
  string s2 = string(str); // ����ָ���ַ�����charָ��(C����)�Ĺ���
  cout << "s2=" << s2 << endl;
  string s3 = string(s2); // �����ַ�������
  cout << "s3=" << s3 << endl;
  string s4 = string(10, 'a'); // ����ĳ���ַ���������Ĺ���
  cout << "s4=" << s4 << endl;
}

int main() {
  test01();
  return 0;
}