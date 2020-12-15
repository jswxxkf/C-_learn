//
// Created by 29024 on 2020/12/15.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

void printMap(map<int, int> &m) {
  for (map<int, int>::iterator iter = m.begin(); iter != m.end(); iter++) {
    cout << "key = " << (*iter).first << ", val = " << (*iter).second << endl;
  }
}

void test01() {
  // ����͸�ֵ
  map<int, int> m;
  // Ĭ�ϰ���keyֵ��������
  m.insert(pair<int, int>(1, 10));
  m.insert(pair<int, int>(3, 30));
  m.insert(pair<int, int>(2, 20));
  m.insert(pair<int, int>(4, 40));
  printMap(m);
  // ��������
  map<int, int> m2(m);
  printMap(m2);
  // ��ֵ(ע��û��assign������)
  map<int, int> m3;
  m3 = m2;
  printMap(m3);
  // �ж��Ƿ�Ϊ��
  if (!m.empty()) {
    cout << "m��Ϊ��" << endl;
    cout << "m�Ĵ�СΪ��" << m.size() << endl;
  }
  m2.insert(make_pair(6, 60));
  // ����
  cout << "����ǰ��" << endl;
  cout << "m2 -> " << endl;
  printMap(m2);
  cout << "m3 -> " << endl;
  printMap(m3);
  cout << "������" << endl;
  m2.swap(m3);
  cout << "m2 -> " << endl;
  printMap(m2);
  cout << "m3 -> " << endl;
  printMap(m3);
  // ɾ��Ԫ��
  cout << "----------" << endl;
  m3.erase(m3.begin());
  printMap(m3);
  cout << "----------" << endl;
  m3.erase(6);  // ɾ��ָ��key��Ӧ��pair
  printMap(m3);
  // ���
  // m3.erase(m3.begin(), m3.end());
  m3.clear();
  printMap(m3);
}

// ���Һ�ͳ��
void test02() {
  map<int, int> m;
  // Ĭ�ϰ���keyֵ��������
  m.insert(pair<int, int>(1, 10));
  m.insert(pair<int, int>(3, 30));
  m.insert(pair<int, int>(2, 20));
  m.insert(pair<int, int>(4, 40));
  printMap(m);
  map<int, int>::iterator pos = m.find(1);
  if (pos != m.end()) {
    cout << "�鵽��Ԫ�أ�" << (*pos).first << " value = " << pos->second << endl;
  } else {
    cout << "δ�ҵ�Ԫ��" << endl;
  }
  // ͳ��(����ͳ�ƶ��ԣ����Ҫô��0��Ҫô��1) ��multimap��countͳ�Ʒ���ֵ���Դ���1
  int num = m.count(3);
  cout << "keyΪ3��Ԫ�صĸ���Ϊ" << num << endl;
}

int main(int argc, const char *argv[]) {
//  test01();
  test02();
  system("pause");
  return 0;
}