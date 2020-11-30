#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Student
{
public:
    string sname;
    int sid;
    void showInfo()
    {
        cout << "姓名：" << sname << "\t学号：" << sid << endl;
    }
    // 给姓名赋值
    void setName(string name)
    {
        sname = name;
    }
    char getCup()
    {
        return cup;
    }
    void setCup(char cup)
    {
        cup = cup;
    }

protected: // 类外无法访问 子类保护
    string addr;

private: // 类外无法访问
    string password;
    int age;
    char cup;
};

int main(int argc, char const *argv[])
{
    Student stu;
    stu.sname = "xkf";
    stu.sid = 1;
    stu.showInfo();
    stu.setName("lidan");
    stu.showInfo();
    return 0;
}
