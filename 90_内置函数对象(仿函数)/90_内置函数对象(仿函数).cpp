//
// Created by 29024 on 2020/12/15.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

// ʹ���ڽ�����������Ҫ����<functional>ͷ�ļ�
// �����º���
void test01() {
  // negate һԪ�º��� ȡ���º���
  negate<int> n;
  cout << n(50) << endl;
  // ��Ԫ�º��� �ӷ�
  plus<int> p;
  cout << p(10, 20) << endl;
}

class MyCompare {
public:
  bool operator()(int v1, int v2) {
    return v1 > v2;
  }
};

// ��ϵ�º���
void test02() {
  // ���� greater
  vector<int> v;
  v.push_back(10);
  v.push_back(30);
  v.push_back(40);
  v.push_back(20);
  v.push_back(50);
  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
  // ʹ���Լ�д�ķº���
  //  sort(v.begin(), v.end(), MyCompare());
  //  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
  //    cout << *iter << " ";
  //  }
  // ʹ���ڽ��Ĺ�ϵ�º���
  // *** Ĭ����������Ѿ�ʹ���� less<T> С���ڽ��º��� ***
  sort(v.begin(), v.end(), greater<int>());
  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

// �ڽ��߼��º���
void test03() {
  // �߼��� logical_not
  vector<bool> v;
  v.push_back(true);
  v.push_back(false);
  v.push_back(true);
  v.push_back(false);
  for (vector<bool>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
  // �����߼��� ������v���˵�v2�У���ִ��ȡ������
  vector<bool> v2;
  v2.resize(v.size());
  transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
  for (vector<bool>::iterator iter = v2.begin(); iter != v2.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
  test03();
  system("pause");
  return 0;
}