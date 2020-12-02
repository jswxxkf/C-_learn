//
// Created by Administrator on 2020/12/2.
//
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

template<class T>
void mySwap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

template<class T>
void mySort(T arr[], int len) {
  // 使用选择排序
  for (int i = 0; i < len; ++i) {
    int max = i;  // 认定最大值的下标
    for (int j = i + 1; j < len; ++j) {
      if (arr[max] < arr[j]) {
        max = j; // 更新最大值的下标
      }
    }
    if (max != i) {
      mySwap(arr[max], arr[i]);
    }
  }
}

template<class T>
void printArray(T arr[], int len) {
  for (int i = 0; i < len; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void test01() {
  char charArr[] = "badcfe";
  int len = sizeof(charArr) / sizeof(char);
  mySort(charArr, len);
  printArray(charArr, len);
}

void test02() {
  int intArr[] = {1, 4, 2, 5, 3, 9, 7, 8};
  int len = sizeof(intArr) / sizeof(int);
  mySort(intArr, len);
  printArray(intArr, len);
}

int main(int argc, const char *argv[]) {
  test01();
  test02();
  system("pause");
  return 0;
}