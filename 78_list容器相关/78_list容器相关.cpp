//
// Created by 29024 on 2020/12/14.
//

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

void printList(const list<int> &L) {
  for (list<int>::const_iterator iter = L.begin(); iter != L.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

// ���캯�����
void test01() {
  // ����list����
  list<int> L1;
  // �������
  L1.push_back(10);
  L1.push_back(20);
  L1.push_back(30);
  L1.push_back(40);
  // ��������
  printList(L1);
  // ���䷽ʽ����
  list<int> L2(L1.begin(), L1.end());
  printList(L2);
  // ��������
  list<int> L3(L2);
  printList(L3);
  // n��elem����
  list<int> L4(10, 100);
  printList(L4);
}

void test02(){
  // ��ֵ�ͽ���
  list<int> L1;
  L1.push_back(10);
  L1.push_back(20);
  L1.push_back(30);
  L1.push_back(40);
  printList(L1);
  // ��ֵ����
  list<int> L2;
  L2 = L1;
  printList(L2);
  list<int> L3;
  L3.assign(L2.begin(), L2.end());
  printList(L3);
  list<int> L4;
  L4.assign(10, 100);
  printList(L4);
  // ��������
  cout << "������L3��L4��" << endl;
  L3.swap(L4);
  cout << "L3 -> ";
  printList(L3);
  cout << "L4 -> ";
  printList(L4);
  // ��С����
  cout << "L4�Ĵ�СΪ��" << L4.size() << endl;
  // �ж��Ƿ�Ϊ��
  if (!L4.empty()) {
    cout << "L4��Ϊ��" << endl;
  } else {
    cout << "L4Ϊ��" << endl;
  }
  // �����ƶ���С
  L4.resize(12);
  cout << "����ָ����С��" << endl;
  cout << "L4�Ĵ�СΪ��" << L4.size() << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
//  test03();
  system("pause");
  return 0;
}