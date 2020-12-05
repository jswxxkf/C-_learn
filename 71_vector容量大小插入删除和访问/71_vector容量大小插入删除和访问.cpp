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
  // �ж��Ƿ�Ϊ��
  if (v1.empty()) {
    cout << "v1Ϊ��" << endl;
  } else {
    cout << "v1��Ϊ��" << endl;
    // 1. ����(ͨ��Ϊcoderwhy��˵������[findNextPrime])
    cout << "v1������Ϊ:" << v1.capacity() << endl;
    // 2. ��С
    cout << "v1�Ĵ�СΪ:" << v1.size() << endl;
  }
  // 3. ����ָ����С
  v1.resize(17);
  // v1.resize(17, 100); // �������صİ汾��ָ��Ĭ�����ֵ
  printVector(v1); // �������ָ���ı�ԭ�����ˣ�Ĭ����0�����λ��
  v1.resize(5);
  printVector(v1); // �������ָ���ı�ԭ�����ˣ���ɾ���������ֵ�Ԫ��

  // 4. �����ɾ��
  // βɾ
  v1.pop_back();
  printVector(v1);
  // ����(ע�����λ�ò������봫��*������*)
  v1.insert(v1.begin(), 100);
  printVector(v1);
  v1.insert(v1.begin(), 2, 50);
  printVector(v1);
  // ɾ��(ע�����λ�ò������봫��*������*)
  v1.erase(v1.begin()); // ɾ��beginλ�õ�Ԫ��
  printVector(v1);
  // 5. ���
  // v1.erase(v1.begin(), v1.end());
  // printVector(v1);
  // v1.clear(); // ��� - ��2

  // 6. ȡ��ĳ��Ԫ��
  cout << "��2��Ԫ��Ϊ��" << v1.at(1) << endl;
  cout << "��3��Ԫ��Ϊ��" << v1[2] << endl;
  cout << "��1��Ԫ��Ϊ��" << v1.front() << endl;
  cout << "��-1��Ԫ��Ϊ��" << v1.back() << endl;
}

int main() {
  test01();
  system("pause");
  return 0;
}