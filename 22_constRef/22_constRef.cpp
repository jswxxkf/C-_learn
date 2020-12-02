#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 常量引用
// 使用场景：用于修饰形参，防止误操作
// 此处的形参相当于const int *const val = &46_多态应用_制作饮品;
void showValue(const int &val)
{
    // val = 1000;  // ✖，val必须是可修改的左值
    cout << val << endl;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    showValue(a);
    return 0;
}
