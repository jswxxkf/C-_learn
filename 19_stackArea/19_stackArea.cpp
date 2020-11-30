#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int *func()
{
    // 利用new关键字，可以开辟堆区空间
    // 返回该数据对应类型的指针
    int *p = new int(10);
    return p;
}

int main(int argc, char const *argv[])
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    // 释放堆区空间
    delete p;
    cout << *p << endl;
    system("pause");

    // 堆区开辟数组
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    // 释放数组 delete后要加[]
    delete[] arr;
    cout << arr[0] << endl;
    system("pause");
    return 0;
}
