#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int age;
    int score;
    string name;
} s3;

int main(int argc, char const *argv[])
{
    struct Student s1;
    s1.name = "coderwhy";
    s1.age = 18;
    s1.score = 90;
    Student s2 = {19, 95, "xkf"};
    cout << "age of Student s2: " << s2.age << endl;
    return 0;
}
