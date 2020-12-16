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

// copy����������������
void test01() {
  vector<int> v1;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);

  }
  vector<int> v2;
  v2.resize(v1.size());
  copy(v1.begin(), v1.end(), v2.begin());
  for_each(v2.begin(), v2.end(), myPrint);
  cout << endl;
}

class MyPrint {
public:
  void operator()(int val) {
    cout << val << " ";
  }
};

class Greater30 {
public:
  bool operator()(int val) {
    return val >= 30;
  }
};

// replace �滻����������������Ԫ��Ϊָ������Ԫ��
void test02() {
  vector<int> v;
  v.push_back(20);
  v.push_back(30);
  v.push_back(50);
  v.push_back(30);
  v.push_back(40);
  v.push_back(20);
  v.push_back(10);
  v.push_back(20);
  cout << "�滻ǰ��" << endl;
  for_each(v.begin(), v.end(), MyPrint());
  cout << endl;
  // ������20�滻Ϊ2000
  cout << "�滻��" << endl;
  replace(v.begin(), v.end(), 20, 2000);
  for_each(v.begin(), v.end(), MyPrint());
  cout << endl;
}

// replace_if ������������������Ԫ�� �滻��ָ��Ԫ��
void test03() {
  vector<int> v;
  v.push_back(20);
  v.push_back(30);
  v.push_back(50);
  v.push_back(30);
  v.push_back(40);
  v.push_back(20);
  v.push_back(10);
  v.push_back(20);
  cout << "�滻ǰ��" << endl;
  for_each(v.begin(), v.end(), MyPrint());
  cout << endl;
  // �����ڵ���30��Ԫ���滻Ϊ3000
  replace_if(v.begin(), v.end(), Greater30(), 3000);
  cout << "�滻��" << endl;
  for_each(v.begin(), v.end(), MyPrint());
  cout << endl;
}

// swap ʵ��ͬ��ģ��������͵�����ȫ��Ԫ�صĻ���
void test04() {
  vector<int> v1;
  vector<int> v2;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
    v2.push_back(i + 100);
  }
  cout << "����ǰ:" << endl;
  for_each(v1.begin(), v1.end(), myPrint);
  cout << endl;
  for_each(v2.begin(), v2.end(), myPrint);
  cout << endl;
  cout << "������:" << endl;
  swap(v1, v2);
  for_each(v1.begin(), v1.end(), myPrint);
  cout << endl;
  for_each(v2.begin(), v2.end(), myPrint);
  cout << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
//  test03();
  test04();
  system("pause");
  return 0;
}