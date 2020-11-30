#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    // 1. 常量指针
    int const *p = &a;
    p = &b; // ✔  指针的指向可以改
    // *p = 20; // ✖  指针指向的值不可以更改
    // 2. 指针常量
    int *const q = &a;
    // q = &b;  // ✖ 指针的指向不可以修改
    *q = 10; // ✔ 指针指向的值可以修改
    // 3. const既修饰指针，也修饰常量
    int const *const r = &a;
    // r = &b;  // ✖
    // *r = 20; // ✖
    return 0;
}
