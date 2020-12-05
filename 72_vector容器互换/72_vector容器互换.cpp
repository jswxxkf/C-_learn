//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> &v) {
  for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

void test01() {
  vector<int> v1;
  for (int i = 0; i < 10; ++i) {
    v1.push_back(i);
  }
  printVector(v1);
  vector<int> v2;
  for (int j = 10; j > 0; --j) {
    v2.push_back(j);
  }
  printVector(v2);
  v1.swap(v2);
  printVector(v1);
  printVector(v2);
}

//互换的实际应用
void test02(){
  vector<int> v1;
  for (int i = 0; i < 100000; ++i) {
    v1.push_back(i);
  }
  cout << "resize前v1的容量：" << v1.capacity() << endl;
  cout << "resize前v1的大小：" << v1.size() << endl;
  v1.resize(3);
  cout << "resize后v1的容量：" << v1.capacity() << endl;
  cout << "resize后v1的大小：" << v1.size() << endl;
  // 将v1交换给匿名对象，带有巨大容量的vector容器随后被系统销毁
  // 容量仅初始化为3的匿名对象换给了v1，从而收缩大量内存
  vector<int>(v1).swap(v1);
  cout << "收缩后v1的容量：" << v1.capacity() << endl;
  cout << "收缩后v1的大小：" << v1.size() << endl;
}

int main() {
  // test01();
  test02();
  system("pause");
  return 0;
}