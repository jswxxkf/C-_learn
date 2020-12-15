//
// Created by 29024 on 2020/12/15.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

// 自己定义排序规则，利用仿函数类型
class MyCompare {
public:
  bool operator()(int v1, int v2) {
    return v1 > v2;
  }
};

void printMap(map<int, int, MyCompare> &m) {
  for (map<int, int, MyCompare>::iterator iter = m.begin(); iter != m.end(); iter++) {
    cout << "key = " << (*iter).first << ", val = " << (*iter).second << endl;
  }
}

void test01() {
  map<int, int, MyCompare> m;
  m.insert(make_pair(1, 10));
  m.insert(make_pair(2, 20));
  m.insert(make_pair(3, 30));
  m.insert(make_pair(4, 40));
  m.insert(make_pair(5, 50));
  printMap(m);
}

int main(int argc, const char *argv[]) {
  test01();
  system("pause");
  return 0;
}