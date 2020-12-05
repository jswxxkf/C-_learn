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
  vector<int> v1;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
  }
  printVector(v1);
  vector<int> v2;
  for (int j = 10; j > 0; --j) {
    v2.push_back(j);
  }
  printVector(v2);
  v1.swap(v2);
  printVector(v1);
  printVector(v2);
}

//������ʵ��Ӧ��
void test02(){
  vector<int> v1;
  for (int i = 0; i < 100000; ++i) {
    v1.push_back(i);
  }
  cout << "resizeǰv1��������" << v1.capacity() << endl;
  cout << "resizeǰv1�Ĵ�С��" << v1.size() << endl;
  v1.resize(3);
  cout << "resize��v1��������" << v1.capacity() << endl;
  cout << "resize��v1�Ĵ�С��" << v1.size() << endl;
  // ��v1�������������󣬴��о޴�������vector�������ϵͳ����
  // ��������ʼ��Ϊ3���������󻻸���v1���Ӷ����������ڴ�
  vector<int>(v1).swap(v1);
  cout << "������v1��������" << v1.capacity() << endl;
  cout << "������v1�Ĵ�С��" << v1.size() << endl;
}

int main() {
  // test01();
  test02();
  system("pause");
  return 0;
}