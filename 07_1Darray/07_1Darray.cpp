#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {1, 2, 3};
    cout << arr1[4] << endl;
    int arr2[] = {1, 2, 3, 4};
    cout << &arr2[0] << endl;
    cout << &arr2[1] << endl;
    return 1;
}