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
    cout << "ÖóÅ©·òÉ½Èª" << endl;
  }

  void brew() {
    cout << "³åÅÝ¿§·È" << endl;
  }

  void pourInCup() {
    cout << "µ¹Èë±­ÖÐ" << endl;
  }

  void putSomething() {
    cout << "¼ÓÈëÌÀºÍÅ£ÄÌ" << endl;
  }
};

class Tea : public AbstractDrinking {
public:
  void boil() {
    cout << "Öó¿óÈªË®" << endl;
  }

  void brew() {
    cout << "³åÅÝ²èÒ¶" << endl;
  }

  void pourInCup() {
    cout << "µ¹Èë±­ÖÐ" << endl;
  }

  void putSomething() {
    cout << "¼ÓÈëèÛè½" << endl;
  }
};

void doWork(AbstractDrinking *abs) {
  abs->makeDrink();
  delete abs;
}

void test01() {
  // ÖÆ×÷¿§·È
  doWork(new Coffee);
  // ÖÆ×÷²èÒ¶
  doWork(new Tea);
}

int main(int argc, char const *argv[]) {
  test01();
  return 0;
}

