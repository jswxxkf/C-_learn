//
// Created by 29024 on 2020/12/5.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void test01() {
  string s1 = "lidan";
  // 1.ͨ��[]���ʵ����ַ�
  for (int i = 0; i < s1.size(); ++i) {
    cout << s1[i] << " ";
  }
  cout << endl;
  // 2.ͨ��at��ʽ���ʵ����ַ�
  for (int j = 0; j < s1.size(); ++j) {
    cout << s1.at(j) << " ";
  }
  cout << endl;
  // �޸ĵ����ַ�
  cout << "�޸ĵ����ַ���" << endl;
  s1[0] = 'x';
  cout << "s1=" << s1 << endl;
  // ����
  cout << "�����" << endl;
  s1.insert(1, "�");
  cout << "s1=" << s1 << endl;
  // ɾ��
  s1.erase(1, 4);
  cout << "ɾ����" << endl;
  cout << "s1=" << s1 << endl;
  // ȡ�Ӵ�
  string sub = s1.substr(0, 3);
  cout << "ȡ�����ִ���" << endl;
  cout << "substring=" << sub << endl;
}

int main() {
  test01();
  system("pause");
  return 0;
}