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

// 选手类
class Person {
public:
  string name;
  int score; // 平均分

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
    string name = "选手";
    name += nameSeed[i];
    int score = 0;
    Person p = Person(name, score);
    v.push_back(p);
  }
}

void test01() {
  // 创建5名选手
  vector<Person> v = vector<Person>();
  createPerson(v);
  // 打分
  setScore(v);
  // 显示最终得分
  showScore(v);
}

void setScore(vector<Person> &v) {
  for (vector<Person>::iterator iter = v.begin(); iter != v.end(); iter++) {
    // 将评委的分数放入到deque容器中
    deque<int> d = deque<int>();
    for (int i = 0; i < 10; ++i) {
      int score = rand() % 41 + 60;  // 60~100的随机分
      d.push_back(score);
    }
    // 排序
    sort(d.begin(), d.end());
    // 去除最高和最低分
    d.pop_back();  // 尾删
    d.pop_front();  // 头删
    // 求取平均分
    int sum = 0;
    for (deque<int>::iterator dIter = d.begin(); dIter != d.end(); dIter++) {
      sum += *dIter;
    }
    int avg = sum / d.size();
    // 将均分赋值到选手身上
    (*iter).score = avg;
  }
}

void showScore(vector<Person> &v) {
  for (vector<Person>::iterator iter = v.begin(); iter != v.end(); iter++) {
    cout << "姓名：" << (*iter).name << " 平均分：" << (*iter).score << endl;
  }
}

int main(int argc, const char *argv[]) {
  // 添加随机种子
  srand((unsigned int) time(NULL));
  test01();
  system("pause");
  return 0;
}