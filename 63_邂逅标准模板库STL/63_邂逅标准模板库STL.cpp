//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void myPrint(int val) {
  cout << val << endl;
}

void test01() {
  vector<int> v = vector<int>();
  // �������в�������
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  // ͨ�����������������е�����
  vector<int>::iterator itBegin = v.begin(); // ��ʼ��������ָ�������еĵ�һ��Ԫ��
  vector<int>::iterator itEnd = v.end();  // ������������ָ�����������һ��Ԫ�ص���һ��λ��
  // ��һ�ֱ�����ʽ
  while (itBegin != itEnd) {
    cout << *itBegin << endl;
    itBegin++;
  }
  // �ڶ��ֱ�����ʽ
  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << endl;
  }
  // �����ֱ�����ʽ ����STL�ṩ�ı����㷨 ����������������callback
  for_each(v.begin(), v.end(), myPrint);
}

int main() {
  test01();
  system("pause");
  return 0;
}