#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 2, 5, 4};
    cout << "ÄæÖÃÇ°£º" << endl;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "ÄæÖÃºó£º" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}