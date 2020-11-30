#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 空指针，用于给指针变量初始化
    int *p = NULL;
    // 空指针是无法进行访问的
    // 0-255之间的内存编号是系统占用的，用户无法访问
    // *p = 100;
    return 0;
}
