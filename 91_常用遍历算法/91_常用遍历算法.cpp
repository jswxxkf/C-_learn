//
// Created by Administrator on 2020/12/15.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

// for_each��ʹ��
class MyPrint {
public:
  void operator()(int val) {
    cout << val << " ";
  }
};

void test01() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }
  // �����������Ƿº�������ͨ����
  for_each(v.begin(), v.end(), MyPrint());
  cout << endl;
}

// transform(����������������)��ʹ��
class Transform{
public:
  int operator()(int val){
    return val;
  }
};

void test02(){
  vector<int> v1;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
  }
  vector<int> v2;
  // ע�⣡Ŀ������������ǰ���ٿռ�
  v2.resize(v1.size());
  transform(v1.begin(), v1.end(), v2.begin(), Transform());
  for_each(v2.begin(), v2.end(), MyPrint());
  cout << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
  test02();
  system("pause");
  return 0;
}