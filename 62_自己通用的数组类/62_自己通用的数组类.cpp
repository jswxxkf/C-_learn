//
// Created by 29024 on 2020/12/3.
//

#include <iostream>
#include <string>
#include "myArray.hpp"

using namespace std;

void printIntArray(MyArray<int> &arr) {
  for (int i = 0; i < arr.getSize(); ++i) {
    cout << arr[i] << endl;
  }
}

void test01() {
  MyArray<int> arr1 = MyArray<int>(5);
//  MyArray<int> arr2 = MyArray<int>(arr1);
  MyArray<int> arr3 = MyArray<int>(100);
  MyArray<int> arr4 = MyArray<int>(50);
  arr4 = arr3 = arr1;
  cout << "arr3.capacity=" << arr3.getCapacity() << endl;
  cout << "arr4.capacity=" << arr4.getCapacity() << endl;
}

void test02() {
  MyArray<int> arr1 = MyArray<int>(5);
  for (int i = 0; i < 5; ++i) {
    arr1.push(i);
  }
  cout << "arr1�Ĵ�ӡ���Ϊ:" << endl;
  printIntArray(arr1);
  cout << "arr1������Ϊ:" << arr1.getCapacity() << endl;
  cout << "arr1�Ĵ�СΪ:" << arr1.getSize() << endl;
  MyArray<int> arr2 = MyArray<int>(arr1);
  cout << "arr2�Ĵ�ӡ���Ϊ:" << endl;
  printIntArray(arr2);
  arr2.pop();
  cout << "arr2βɾ��:" << endl;
  cout << "arr2������Ϊ:" << arr2.getCapacity() << endl;
  cout << "arr2�Ĵ�СΪ:" << arr2.getSize() << endl;
}

// �����Զ�����������
class Person {
public:
  string name;
  int age;

  Person() {}

  Person(string name, int age) {
    this->name = name;
    this->age = age;
  }
};

void printPersonArray(MyArray<Person> &arr) {
  for (int i = 0; i < arr.getSize(); ++i) {
    cout << "����:" << arr[i].name << " ����:" << arr[i].age << endl;
  }
}

void test03() {
  Person p1("�", 20);
  Person p2("coderwhy", 18);
  Person p3("xkf", 20);
  Person p4("ʯ����", 21);
  Person p5("lidan", 20);
  MyArray<Person> arr1 = MyArray<Person>(5);
  arr1.push(p1).push(p2).push(p3).push(p4).push(p5);
  printPersonArray(arr1);
  cout << "arr1������Ϊ:" << arr1.getCapacity() << endl;
  cout << "arr1�Ĵ�СΪ:" << arr1.getSize() << endl;
}

int main(int argc, const char *argv[]) {
  test01();
//  test02();
//  test03();
  system("pause");
  return 0;
}
