//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> &v) {
  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

void test01() {
  vector<int> v1;  // Ĭ�Ϲ���
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
  }
  printVector(v1);
  // ͨ���������乹��
  vector<int> v2 = vector<int>(v1.begin(), v1.end());
  printVector(v2);
  // ͨ��n��Ԫ�ع���
  vector<int> v3 = vector<int>(10, 100);
  printVector(v3);
  // ��������
  vector<int> v4(v3);
  printVector(v4);
  // vector��ֵ
  vector<int> v5 = vector<int>();
  // v5 = v4; // ��1
  v5.assign(v4.begin(), v4.end());  // ��2 �������丳ֵ
  printVector(v5);
  vector<int> v6 = vector<int>();
  v6.assign(10, 50); // ��3 n��Ԫ�ظ�ֵ
  printVector(v6);
}

int main() {
  test01();
  system("pause");
  return 0;
}