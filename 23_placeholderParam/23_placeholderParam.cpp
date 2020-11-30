#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 目前阶段的占位参数还用不到，但后面学习的内容会用到
// 占位参数还可以有默认参数
void func(int a, int = 10) // 第二个参数是占位参数
{
    cout << "this is a function" << endl;
}

int main(int argc, char const *argv[])
{
    func(10);
    return 0;
}
