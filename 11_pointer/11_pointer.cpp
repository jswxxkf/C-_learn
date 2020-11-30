#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int *p = &a;
    // 指针在64位系统中，占8个字节
    // 指针在32位系统中，占4个字节
    cout << sizeof(p) << endl;
    // argument count
    cout << argc << endl;
    // argument vector
    cout << argv[1] << endl;
    return 0;
}
