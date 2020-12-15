//
// Created by 29024 on 2020/12/15.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class MyAdd {
public:
  int operator()(int v1, int v2) {
    return v1 + v2;
  }
};

// 1. ����������ʹ��ʱ����������ͨ�����������ã������в�����Ҳ�����з���ֵ
void test01() {
  MyAdd myAdd;
  cout << myAdd(10, 20) << endl;
}

// 2. ���������ֳ�������ͨ�����ĸ���������Լ���״̬
class MyPrint {
public:
  MyPrint() {
    this->count = 0;
  }

  // �����¼�����˶��ٴ�
  int count; // �ڲ��Լ���״̬
  void operator()(string test) {
    cout << test << endl;
    this->count++;
  }
};

void test02() {
  MyPrint myPrint;
  myPrint("hello cpp");
  myPrint("hello cpp");
  myPrint("hello cpp");
  myPrint("hello cpp");
  cout << "myPrint�ĵ��ô���Ϊ:" << myPrint.count << endl;
}

// 3. �������������Ϊ��������
void doPrint(MyPrint &mp, string test) {
  mp(test);
}

void test03() {
  MyPrint myPrint;
  doPrint(myPrint, "hello cpp");
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
  test03();
  system("pause");
  return 0;
}