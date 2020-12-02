//
// Created by 29024 on 2020/12/2.
//
#include <iostream>
#include <string>

using namespace std;

//以下三个都是抽象零件类
class CPU {
public:
  virtual void calculate() = 0;

  virtual ~CPU() = 0;
};

CPU::~CPU() {}

class VideoCard {
public:
  virtual void display() = 0;

  virtual ~VideoCard() = 0;
};

VideoCard::~VideoCard() {}

class Memory {
public:
  virtual void storage() = 0;

  virtual ~Memory() = 0;
};

Memory::~Memory() {}

// 具体零件厂商
class IntelCpu : public CPU {
public:
  void calculate() override {
    cout << "Intel的CPU开始计算" << endl;
  }

  ~IntelCpu() override {
    cout << "intelCPU即将被销毁" << endl;
  }
};

class IntelVideoCard : public VideoCard {
public:
  void display() override {
    cout << "Intel的显卡开始显示了" << endl;
  }

  ~IntelVideoCard() override {
    cout << "intel显卡即将被销毁" << endl;
  }
};

class IntelMemory : public Memory {
public:
  void storage() override {
    cout << "Intel内存条开始存储" << endl;
  }

  ~IntelMemory() override {
    cout << "intel内存条即将被销毁" << endl;
  }
};

class LenovoMemory : public Memory {
public:
  void storage() override {
    cout << "Lenovo内存条开始存储" << endl;
  }

  ~LenovoMemory() override {
    cout << "联想内存条即将被销毁" << endl;
  }
};

// 电脑类
class Computer {
public:
  Computer(CPU *cpu, VideoCard *vc, Memory *mem) {
    this->cpu = cpu;
    this->vc = vc;
    this->mem = mem;
  }

  void work() {
    // 让零件工作起来，调用接口
    cpu->calculate();
    vc->display();
    mem->storage();
  }

  ~Computer() {
    if (this->cpu != NULL) {
      delete this->cpu;
      this->cpu = NULL;
    }
    if (this->vc != NULL) {
      delete this->vc;
      this->vc = NULL;
    }
    if (this->mem != NULL) {
      delete this->mem;
      this->mem = NULL;
    }
  }

private:
  CPU *cpu;
  VideoCard *vc;
  Memory *mem;
};

void test01() {
  CPU *intelCPU = new IntelCpu;
  VideoCard *intelCard = new IntelVideoCard;
  Memory *intelMem = new IntelMemory;
  // 创建第一台电脑
  Computer *computer1 = new Computer(intelCPU, intelCard, intelMem);
  computer1->work();
  delete computer1;
  //  创建第二台电脑并开始工作
  Computer *computer2 = new Computer(new IntelCpu, new IntelVideoCard, new LenovoMemory);
  computer2->work();
  delete computer2;
}

int main() {
  test01();
  system("pause");
  return 0;
}