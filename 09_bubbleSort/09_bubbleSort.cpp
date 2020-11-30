#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 4, 0, 5, 7, 1, 3, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "before sorting:" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // 总排序轮数为元素个数-1
    for (int i = 0; i < len - 1; i++)
    {
        // 内层循环次数为元素个数-当前轮数-1
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "after sorting:" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}