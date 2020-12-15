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
    worker.name = "员工";
    worker.name += nameSeed[i];
    worker.salary = rand() % 10000 + 10000; // 10000~19999
    // 将员工放入到容器中
    v.push_back(worker);
  }
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &m) {
  for (vector<Worker>::iterator iter = v.begin(); iter != v.end(); iter++) {
    // 产生随机部门编号
    int deptId = rand() % 3; // 0 1 2
    m.insert(make_pair(deptId, *iter));  // <部门编号, 员工>
  }
}

void showWorkerByGroup(multimap<int, Worker> &m){
  cout << "策划部门：" << endl;
  // 获得第一个策划部门员工所在的索引
  multimap<int, Worker>::iterator pos = m.find(CEHUA);
  // 统计该部门有多少人
  int count = m.count(CEHUA);
  int index = 0;
  for (; pos != m.end() && index < count; pos++, index++) {
    cout << "姓名：" << pos->second.name << " 工资：" << pos->second.salary << endl;
  }
  cout << "--------------------" << endl;
  cout << "美术部门：" << endl;
  pos = m.find(MEISHU);
  count = m.count(MEISHU);
  index = 0;
  for (; pos != m.end() && index < count; pos++, index++) {
    cout << "姓名：" << pos->second.name << " 工资：" << pos->second.salary << endl;
  }
  cout << "--------------------" << endl;
  cout << "研发部门：" << endl;
  pos = m.find(YANFA);
  count = m.count(YANFA);
  index = 0;
  for (; pos != m.end() && index < count; pos++, index++) {
    cout << "姓名：" << pos->second.name << " 工资：" << pos->second.salary << endl;
  }
}

void test01() {
  // 1. 创建员工
  vector<Worker> vWorker;
  createWorker(vWorker);
  // test
  // for (vector<Worker>::iterator iter = vWorker.begin(); iter != vWorker.end(); iter++) {
  //   cout << "姓名：" << iter->name << " 工资：" << iter->salary << endl;
  // }
  // 2. 员工分组
  multimap<int, Worker> mWorker;
  setGroup(vWorker, mWorker);
  // 3. 分组显示
  showWorkerByGroup(mWorker);
}

int main(int argc, const char *argv[]) {
  srand((unsigned int) time(NULL));
  test01();
  system("pause");
  return 0;
}