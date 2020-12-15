//
// Created by Administrator on 2020/12/14.
//

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void printSet(const set<int> &s) {
  for (set<int>::const_iterator iter = s.begin(); iter != s.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;
}

void test01() {
  set<int> s1;
  // ����ֻ��insert��ʽ
  s1.insert(20);
  s1.insert(10);
  s1.insert(40);
  s1.insert(30);
  // ����Ԫ��
  // set�����ص㣺����Ԫ�ز���ʱ�Զ�������
  // set��������������ظ�ֵ
  printSet(s1);
  // ��������
  set<int> s2 = s1;
  printSet(s2);
  // ��С
  cout << "��ǰset s1�Ĵ�СΪ��" << s1.size() << endl;
  // �Ƿ�Ϊ��
  if (!s1.empty()) {
    cout << "s1��Ϊ��" << endl;
  } else {
    cout << "s1Ϊ��" << endl;
  }
  // ����
  s2.insert(100);
  s2.insert(200);
  s2.insert(300);
  s1.swap(s2);
  cout << "����ǰ��" << endl;
  cout << "s1 -> " << endl;
  printSet(s1);
  cout << "s2 -> " << endl;
  printSet(s2);
  cout << "������" << endl;
  cout << "s1 -> " << endl;
  printSet(s1);
  cout << "s2 -> " << endl;
  printSet(s2);
}

// �����ɾ������
void test02() {
  set<int> s1;
  // ����ֻ��insert��ʽ
  s1.insert(20);
  s1.insert(10);
  s1.insert(40);
  s1.insert(30);
  printSet(s1);
  // ɾ��
  s1.erase(s1.begin());
  printSet(s1);
  s1.erase(40);
  printSet(s1);
  // ���
  // s1.erase(s1.begin(), s1.end())
  s1.clear();
}

// ���Һ�ͳ��
void test03() {
  set<int> s1;
  // ����ֻ��insert��ʽ
  s1.insert(20);
  s1.insert(10);
  s1.insert(40);
  s1.insert(30);
  s1.insert(30);
  printSet(s1);
  // find()���ص��������������򷵻�s1.end()
  set<int>::iterator pos = s1.find(10);
  if (pos != s1.end()) {
    cout << "�ҵ�Ԫ�أ�" << *pos << endl;
  } else {
    cout << "δ�ҵ�Ԫ��" << endl;
  }
  // ͳ��ĳ��Ԫ�صĸ���������set���ԣ����ص�Ҫô��0��Ҫô��1
  int num = s1.count(30);
  cout << "num of 30=" << num << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
//  test02();
  test03();
  system("pause");
  return 0;
}