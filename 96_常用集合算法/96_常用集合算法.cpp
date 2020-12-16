//
// Created by 29024 on 2020/12/16.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void myPrint(int val) {
  cout << val << " ";
}

// ���ü����㷨
// ���� set_intersection
void test01() {
  vector<int> v1;
  vector<int> v2;
  vector<int> vTarget;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
    v2.push_back(i + 5);
  }
  // �ص㣺vTarget��ο��ٿռ䣿 ȡv1��v2��С����Сֵ(������)
  vTarget.resize(min(v1.size(), v2.size()));
  // set_intersection���ؽ����Ľ���������
  vector<int>::iterator iterEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
  cout << "v1��v2�Ľ�����" << endl;
  for_each(vTarget.begin(), iterEnd, myPrint);
  cout << endl;
}

// set_union ����
void test02() {
  vector<int> v1;
  vector<int> v2;
  vector<int> vTarget;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
    v2.push_back(i + 5);
  }
  vTarget.resize(v1.size() + v2.size());
  vector<int>::iterator iterEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
  cout << "v1��v2�Ĳ�����" << endl;
  for_each(vTarget.begin(), iterEnd, myPrint);
  cout << endl;
}

// set_difference � Ҫ����v1��v2� ����v2��v1�
void test03() {
  vector<int> v1;
  vector<int> v2;
  vector<int> vTarget;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
    v2.push_back(i + 5);
  }
  // �����¼��������Ŀռ� ������������Ҫȥ����ԭ�����д���Ǹ���Ϊ�������Ŀռ�
  vTarget.resize(max(v1.size(), v2.size()));
  vector<int>::iterator iterEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
  cout << "v1��v2�Ĳ��" << endl;
  for_each(vTarget.begin(), iterEnd, myPrint);
  cout << endl;
  iterEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
  cout << "v2��v1�Ĳ��" << endl;
  for_each(vTarget.begin(), iterEnd, myPrint);
  cout << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
  test03();
  system("pause");
  return 0;
}