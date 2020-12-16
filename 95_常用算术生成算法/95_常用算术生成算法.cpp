//
// Created by 29024 on 2020/12/16.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>

using namespace std;

void myPrint(int val) {
  cout << val << " ";
}

// accumulate
void test01() {
  vector<int> v;
  for (int i = 0; i <= 100; ++i) {
    v.push_back(i);
  }
  // 类似于JS中的 Array.prototype.reduce((acc, val) => {}, init_val)
  int total = accumulate(v.begin(), v.end(), 0);
  cout << "累加和 = " << total << endl;
}

// fill 填充容器中的值为指定新值
void test02() {
  vector<int> v;
  v.resize(10); // 10个0
  // 后期重新填充操作
  fill(v.begin(), v.end(), 100);
  for_each(v.begin(), v.end(), myPrint);
  cout << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
  test02();
  system("pause");
  return 0;
}