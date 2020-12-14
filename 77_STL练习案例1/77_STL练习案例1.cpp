//
// Created by 29024 on 2020/12/6.
//

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <ctime>
#include <algorithm>

using namespace std;

// ѡ����
class Person {
public:
  string name;
  int score; // ƽ����

  Person(string name, int score) {
    this->name = name;
    this->score = score;
  }
};

void setScore(vector<Person> &v);

void showScore(vector<Person> &v);

void createPerson(vector<Person> &v) {
  for (int i = 0; i < 5; ++i) {
    string nameSeed = "ABCDE";
    string name = "ѡ��";
    name += nameSeed[i];
    int score = 0;
    Person p = Person(name, score);
    v.push_back(p);
  }
}

void test01() {
  // ����5��ѡ��
  vector<Person> v = vector<Person>();
  createPerson(v);
  // ���
  setScore(v);
  // ��ʾ���յ÷�
  showScore(v);
}

void setScore(vector<Person> &v) {
  for (vector<Person>::iterator iter = v.begin(); iter != v.end(); iter++) {
    // ����ί�ķ������뵽deque������
    deque<int> d = deque<int>();
    for (int i = 0; i < 10; ++i) {
      int score = rand() % 41 + 60;  // 60~100�������
      d.push_back(score);
    }
    // ����
    sort(d.begin(), d.end());
    // ȥ����ߺ���ͷ�
    d.pop_back();  // βɾ
    d.pop_front();  // ͷɾ
    // ��ȡƽ����
    int sum = 0;
    for (deque<int>::iterator dIter = d.begin(); dIter != d.end(); dIter++) {
      sum += *dIter;
    }
    int avg = sum / d.size();
    // �����ָ�ֵ��ѡ������
    (*iter).score = avg;
  }
}

void showScore(vector<Person> &v) {
  for (vector<Person>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << "������" << (*iter).name << " ƽ���֣�" << (*iter).score << endl;
  }
}

int main(int argc, const char *argv[]) {
  // ����������
  srand((unsigned int) time(NULL));
  test01();
  system("pause");
  return 0;
}