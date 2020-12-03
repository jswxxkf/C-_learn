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

//class Son : public Base {  // �������಻֪��������T����������
//
//};

class Son : public Base<int> {

};

//��������ָ��������T���ͣ�����Ҳ��Ҫ��Ϊ��ģ��
template<class T1, class T2>
class Son2 : public Base<T2> {
public:
  T1 obj;

  Son2() {
    cout << "T1������Ϊ��" << typeid(T1).name() << endl;
    cout << "T2������Ϊ��" << typeid(T2).name() << endl;
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
