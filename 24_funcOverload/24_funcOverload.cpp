#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 重载的条件：
// 1. 同一个作用域下
// 2. 函数的名称相同
// 3. 函数参数的类型不同，或者个数不同，或者顺序不同
// 注意：函数的返回值不可以作为函数重载的条件
void func(int a)
{
}

void func()
{
}

void func(int a, float b)
{
}

int main(int argc, char const *argv[])
{
    func(10, 1.5);
    return 0;
}
