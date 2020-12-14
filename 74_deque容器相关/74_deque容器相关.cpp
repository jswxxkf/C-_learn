//
// Created by 29024 on 2020/12/6.
//

#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

void printDeque(const deque<int> &deq){
  for (deque<int>::const_iterator iter = deq.begin(); iter != deq.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

void test01(){
  deque<int> deq1 = deque<int>();  // Ĭ�Ϲ���
  deque<int> deq2 = deque<int>(5, 100); // n��elem����
  deque<int> deq3 = deque<int>(deq2); // ��������
  // ˫��������� �ײ�ԭ��Ϊ�м仺��������׵�ַ+�׵�ַ��Ӧ�������ռ䣬��û��������һ����������ݣ������ţ�
  // deque�����ɾ��Ԫ��Ч�ʱ�vector�ߣ���vector����������Ч�ʱ�deque��
  deq1.push_back(10);
  deq1.push_back(20);
  deq1.push_back(30);
  deq1.push_front(100);
  deq1.push_front(200);
  deq1.push_front(300);
  // ����Ԫ��
  deq1.insert(deq1.begin(), 88);
  printDeque(deq1);
  deq1.insert(deq1.begin(), deq2.begin(), deq2.end());
  printDeque(deq1);
  // ɾ��Ԫ��
  deq1.erase(deq1.begin());
  printDeque(deq1);
  // ���Ԫ��
  // deq1.clear();  // ��1
  // deq1.erase(deq1.begin(), deq1.end());  // ��2
  // ��ȡ��С
  cout << "��ǰdeq1�Ĵ�СΪ:" << deq1.size() << endl;
  // ���ݴ�ȡ������׸�� [] �� at
  // deque����
  // ����֧��������ʵ�����������������������sort�㷨ֱ�Ӷ����������
  sort(deq1.begin(), deq1.end());
  cout << "�����" << endl;
  printDeque(deq1);
}

int main(int argc, const char *argv[]){
  test01();
  system("pause");
  return 0;
}