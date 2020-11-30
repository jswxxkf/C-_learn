#include <iostream>
using namespace std;

void bubbleSort(int *arr, int len);
void swap(int *a, int *b);
void printArray(int *arr, int len);

int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 4, 0, 5, 7, 1, 3, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);
    printArray(arr, len);
    return 0;
}

void bubbleSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}