#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};

int main(int argc, char const *argv[])
{
    Student s1 = {"xkf", 19, 90};
    Student *p = &s1;
    p->age = 20;
    cout << p->age << endl;
    return 0;
}
