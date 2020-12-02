#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void mySwap(int &a, int &b);

// 引用传递
void mySwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// ***** 引用在C++内部的本质是指针常量 *****
int main(int argc, char const *argv[])
{
    int a = 10;
    int c = 20;
    // b是a的别名 相当于给a起别名
    // 1. 引用必须初始化
    // int &b;  // ✖
    // 2. 引用一旦初始化，就不可以更改了
    // &b = c; // ✖
    int &b = a; // 相当于 int *const b = &46_多态应用_制作饮品;
    b = 20;
    // b = c; // 意思是把10赋值给b引用的内存中的值
    cout << "46_多态应用_制作饮品=" << a << endl;
    // 引用传递
    mySwap(a, c);
    return 0;
}
