#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 野指针
    float *p = (float *)0x1100;
    int *q = (int *)0x1100;
    // 0x1100这块内存无法随意进行访问（可能被别人占有[正在开房啪啪啪]）
    cout << *p << endl;
    return 0;
}
