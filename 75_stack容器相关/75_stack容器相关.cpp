//
// Created by 29024 on 2020/12/6.
//

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

// FILOջ�������б�����Ϊ ���������Ƿ��ʱ���Ϊ������Ҫ����ջ�����밤����ջԪ��
void test01(){
  stack<int> s = stack<int>(); // Ĭ�Ϲ���
  // ��ջ
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  // ֻҪջ��Ϊ�գ��鿴ջ������ջ
  while (!s.empty()) {
    // �鿴ջ��Ԫ��
    cout << "ջ��Ԫ��Ϊ:" << s.top() << endl;
    // ��ջ
    s.pop();
  }
  // ջ�Ĵ�С
  cout << "ջ�ĵ�ǰ��СΪ:" << s.size() << endl;
}

int main(int argc, const char *argv[]){
  test01();
  system("pause");
  return 0;
}