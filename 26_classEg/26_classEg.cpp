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
        cout << "������" << sname << "\tѧ�ţ�" << sid << endl;
    }
    // ��������ֵ
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

protected: // �����޷����� ���ౣ��
    string addr;

private: // �����޷�����
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
