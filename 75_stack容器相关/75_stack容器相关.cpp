//
// Created by 29024 on 2020/12/6.
//

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

// FILO栈不允许有遍历行为 遍历本身是非质变行为，但若要遍历栈，必须挨个出栈元素
void test01(){
  stack<int> s = stack<int>(); // 默认构造
  // 入栈
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  // 只要栈不为空，查看栈顶并出栈
  while (!s.empty()) {
    // 查看栈顶元素
    cout << "栈顶元素为:" << s.top() << endl;
    // 出栈
    s.pop();
  }
  // 栈的大小
  cout << "栈的当前大小为:" << s.size() << endl;
}

int main(int argc, const char *argv[]){
  test01();
  system("pause");
  return 0;
}