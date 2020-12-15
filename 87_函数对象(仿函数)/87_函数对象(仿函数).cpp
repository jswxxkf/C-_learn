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

// 1. 函数对象在使用时，可以像普通函数那样调用，可以有参数，也可以有返回值
void test01() {
  MyAdd myAdd;
  cout << myAdd(10, 20) << endl;
}

// 2. 函数对象又超出了普通函数的概念，可以有自己的状态
class MyPrint {
public:
  MyPrint() {
    this->count = 0;
  }

  // 额外记录调用了多少次
  int count; // 内部自己的状态
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
  cout << "myPrint的调用次数为:" << myPrint.count << endl;
}

// 3. 函数对象可以作为参数传递
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