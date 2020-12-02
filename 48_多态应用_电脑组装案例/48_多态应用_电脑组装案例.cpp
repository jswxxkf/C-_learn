//
// Created by 29024 on 2020/12/2.
//
#include <iostream>
#include <string>

using namespace std;

//�����������ǳ��������
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

// �����������
class IntelCpu : public CPU {
public:
  void calculate() override {
    cout << "Intel��CPU��ʼ����" << endl;
  }

  ~IntelCpu() override {
    cout << "intelCPU����������" << endl;
  }
};

class IntelVideoCard : public VideoCard {
public:
  void display() override {
    cout << "Intel���Կ���ʼ��ʾ��" << endl;
  }

  ~IntelVideoCard() override {
    cout << "intel�Կ�����������" << endl;
  }
};

class IntelMemory : public Memory {
public:
  void storage() override {
    cout << "Intel�ڴ�����ʼ�洢" << endl;
  }

  ~IntelMemory() override {
    cout << "intel�ڴ�������������" << endl;
  }
};

class LenovoMemory : public Memory {
public:
  void storage() override {
    cout << "Lenovo�ڴ�����ʼ�洢" << endl;
  }

  ~LenovoMemory() override {
    cout << "�����ڴ�������������" << endl;
  }
};

// ������
class Computer {
public:
  Computer(CPU *cpu, VideoCard *vc, Memory *mem) {
    this->cpu = cpu;
    this->vc = vc;
    this->mem = mem;
  }

  void work() {
    // ������������������ýӿ�
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
  // ������һ̨����
  Computer *computer1 = new Computer(intelCPU, intelCard, intelMem);
  computer1->work();
  delete computer1;
  //  �����ڶ�̨���Բ���ʼ����
  Computer *computer2 = new Computer(new IntelCpu, new IntelVideoCard, new LenovoMemory);
  computer2->work();
  delete computer2;
}

int main() {
  test01();
  system("pause");
  return 0;
}