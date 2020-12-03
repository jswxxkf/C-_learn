//
// Created by 29024 on 2020/12/3.
//
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

template<class T>
class Base {
public:
  T m;
};

//class Son : public Base {  // 错误，子类不知道父类中T的数据类型
//
//};

class Son : public Base<int> {

};

//如果想灵活指定父类中T类型，子类也需要变为类模板
template<class T1, class T2>
class Son2 : public Base<T2> {
public:
  T1 obj;

  Son2() {
    cout << "T1的类型为：" << typeid(T1).name() << endl;
    cout << "T2的类型为：" << typeid(T2).name() << endl;
  }
};

void test01() {
  Son s1 = Son();
  Son2<int, char> s2;
}

int main(int argc, const char *argv[]) {
  test01();
  system("pause");
  return 0;
}
