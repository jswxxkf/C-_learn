//
// Created by 29024 on 2020/12/15.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// 返回bool类型的仿函数称为谓词 (predicate)
class GreaterFive {
public:
  bool operator()(int val) {
    return val > 5;
  }
};

void test01() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }
  // 查找容器中 有没有大于5的关键字
  // GreaterFive() 匿名函数对象
  vector<int>::iterator iter = find_if(v.begin(), v.end(), GreaterFive());
  if (iter == v.end()) {
    cout << "未找到" << endl;
  } else {
    cout << "找到了大于5的数字为：" << *iter << endl;
  }
}

int main(int argc, const char *argv[]) {
  test01();
  system("pause");
  return 0;
}