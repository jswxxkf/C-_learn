//
// Created by 29024 on 2020/12/2.
//
#include <iostream>
#include <string>

using namespace std;

class AbstractDrinking {
public:

  virtual void boil() = 0;

  virtual void brew() = 0;

  virtual void pourInCup() = 0;

  virtual void putSomething() = 0;

  void makeDrink() {
    boil();
    brew();
    pourInCup();
    putSomething();
  }
};

class Coffee : public AbstractDrinking {
public:
  void boil() {
    cout << "��ũ��ɽȪ" << endl;
  }

  void brew() {
    cout << "���ݿ���" << endl;
  }

  void pourInCup() {
    cout << "���뱭��" << endl;
  }

  void putSomething() {
    cout << "��������ţ��" << endl;
  }
};

class Tea : public AbstractDrinking {
public:
  void boil() {
    cout << "���Ȫˮ" << endl;
  }

  void brew() {
    cout << "���ݲ�Ҷ" << endl;
  }

  void pourInCup() {
    cout << "���뱭��" << endl;
  }

  void putSomething() {
    cout << "�������" << endl;
  }
};

void doWork(AbstractDrinking *abs) {
  abs->makeDrink();
  delete abs;
}

void test01() {
  // ��������
  doWork(new Coffee);
  // ������Ҷ
  doWork(new Tea);
}

int main(int argc, char const *argv[]) {
  test01();
  return 0;
}

