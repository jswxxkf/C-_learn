//
// Created by 29024 on 2020/12/15.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>
#include <algorithm>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

using namespace std;

class Worker {
public:
  string name;
  int salary;
};

void createWorker(vector<Worker> &v) {
  string nameSeed = "ABCDEFGHIJ";
  for (int i = 0; i < 10; ++i) {
    Worker worker;
    worker.name = "Ա��";
    worker.name += nameSeed[i];
    worker.salary = rand() % 10000 + 10000; // 10000~19999
    // ��Ա�����뵽������
    v.push_back(worker);
  }
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &m) {
  for (vector<Worker>::iterator iter = v.begin(); iter != v.end(); iter++) {
    // ����������ű��
    int deptId = rand() % 3; // 0 1 2
    m.insert(make_pair(deptId, *iter));  // <���ű��, Ա��>
  }
}

void showWorkerByGroup(multimap<int, Worker> &m){
  cout << "�߻����ţ�" << endl;
  // ��õ�һ���߻�����Ա�����ڵ�����
  multimap<int, Worker>::iterator pos = m.find(CEHUA);
  // ͳ�Ƹò����ж�����
  int count = m.count(CEHUA);
  int index = 0;
  for (; pos != m.end() && index < count; pos++, index++) {
    cout << "������" << pos->second.name << " ���ʣ�" << pos->second.salary << endl;
  }
  cout << "--------------------" << endl;
  cout << "�������ţ�" << endl;
  pos = m.find(MEISHU);
  count = m.count(MEISHU);
  index = 0;
  for (; pos != m.end() && index < count; pos++, index++) {
    cout << "������" << pos->second.name << " ���ʣ�" << pos->second.salary << endl;
  }
  cout << "--------------------" << endl;
  cout << "�з����ţ�" << endl;
  pos = m.find(YANFA);
  count = m.count(YANFA);
  index = 0;
  for (; pos != m.end() && index < count; pos++, index++) {
    cout << "������" << pos->second.name << " ���ʣ�" << pos->second.salary << endl;
  }
}

void test01() {
  // 1. ����Ա��
  vector<Worker> vWorker;
  createWorker(vWorker);
  // test
  // for (vector<Worker>::iterator iter = vWorker.begin(); iter != vWorker.end(); iter++) {
  //   cout << "������" << iter->name << " ���ʣ�" << iter->salary << endl;
  // }
  // 2. Ա������
  multimap<int, Worker> mWorker;
  setGroup(vWorker, mWorker);
  // 3. ������ʾ
  showWorkerByGroup(mWorker);
}

int main(int argc, const char *argv[]) {
  srand((unsigned int) time(NULL));
  test01();
  system("pause");
  return 0;
}