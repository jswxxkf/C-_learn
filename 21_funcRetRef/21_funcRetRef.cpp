#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// int &test01()
// {
//     int 46_多态应用_制作饮品 = 10; // 局部变量存放在四区中的栈区
//     return 46_多态应用_制作饮品;
// } // 此写法直接编译不通过 返回的引用指向局部变量a

// int main(int argc, char const *argv[])
// {
//     int &ref = test01();
//     cout << "ref=" << ref << endl;
//     cout << "ref=" << ref << endl; // 第二次结果错误，因为内存已经被释放
//     test01() = 1000;
//     cout << "ref=" << ref << endl;
//     cout << "ref=" << ref << endl;
//     return 0;
// }

int &test02()
{
    static int a = 10;
    return a;
}

int main(int argc, char const *argv[])
{
    int &ref2 = test02();
    cout << "ref=" << ref2 << endl;
    cout << "ref=" << ref2 << endl;
    // ***** 如果函数的返回值是引用，这个函数调用可以作为左值 *****
    test02() = 1000;
    cout << "ref=" << ref2 << endl;
    cout << "ref=" << ref2 << endl;
    return 0;
}
