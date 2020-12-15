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

void test02() {
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

void test03() {
  list<int> L;
  // β��
  L.push_back(10);
  L.push_back(20);
  L.push_back(30);
  // ͷ��
  L.push_front(100);
  L.push_front(200);
  L.push_front(300);
  printList(L);
  // βɾ
  L.pop_back();
  printList(L);
  // ͷɾ
  L.pop_front();
  printList(L);
  // insert����
  // L.insert(L.begin(), 1000);
  // printList(L);
  list<int>::iterator iter = L.begin();
  L.insert(++iter, 1000);
  printList(L);
  // ɾ��
  iter = L.begin();
  L.erase(iter);
  printList(L);
  // �Ƴ�
  L.push_back(10000);
  printList(L);
  L.remove(10000);
  printList(L);
  // ���
  L.clear();
  printList(L);
}

bool myCompare(int v1,int v2){
  // ���򣬾��õ�һ���� > �ڶ�����
  return v1 > v2;
}

// ���ݴ�ȡ����ת������
void test04() {
  list<int> L;
  L.push_back(10);
  L.push_back(20);
  L.push_back(30);
  L.push_back(40);
  L.push_front(100);
  L.push_front(200);
  L.push_front(300);
  // list�ײ��������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
  // L[0] // �޷���[]����list�����е�Ԫ��
  // L.at(0) // Ҳ�޷���at(ind)
  cout << "��һ��Ԫ��Ϊ��" << L.front() << endl;
  cout << "���һ��Ԫ��Ϊ��" << L.back() << endl;
  // �������ǲ�֧��������ʵ�
  list<int>::iterator iter = L.begin();
  // iter = iter + 2 // �޷���Ծ��ֻ��˫���++ --
  // ��ת
  cout << "��תǰ��" << endl;
  printList(L);
  L.reverse();
  cout << "��ת��" << endl;
  printList(L);
  // ����
  // ע�⣺���в�֧��������ʵ������������������ñ�׼�㷨������
  // ���ǣ���֧��������ʵ������������ڲ������ṩ��Ӧ��һЩ�㷨
  L.sort(); // Ĭ���������
  cout << "���������" << endl;
  printList(L);
  cout << "���������" << endl;
  L.sort(myCompare); // �Զ���Ľ�������
  printList(L);
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
//  test03();
  test04();
  system("pause");
  return 0;
}