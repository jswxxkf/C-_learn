#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};

struct Teacher
{
    string name;
    int age;
    Student stu;
};

int main(int argc, char const *argv[])
{
    // 随机数种子
    srand((unsigned int)time(NULL));
    int random = rand() % 60 + 41;
    Teacher t1 = {"coderwhy", 26, {"lidan", 18, random}};
    cout << t1.stu.score << endl;
    return 0;
}
