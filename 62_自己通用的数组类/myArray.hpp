//
// Created by 29024 on 2020/12/3.
//

#ifndef CPP_LEARN_MYARRAY_HPP
#define CPP_LEARN_MYARRAY_HPP

#endif //CPP_LEARN_MYARRAY_HPP

#pragma once

#include <iostream>

using namespace std;

template<class T>
class MyArray {
public:
  MyArray(int capacity) {
    // cout << "MyArray的有参构造调用" << endl;
    this->capacity = capacity;
    this->size = 0;
    this->pAddress = new T[this->capacity];
  }

  ~MyArray() {
    // cout << "MyArray的析构函数调用" << endl;
    if (this->pAddress != NULL) {
      delete[] this->pAddress;
      this->pAddress = NULL;
    }
  }

  //拷贝构造
  MyArray(const MyArray &arr) {
    cout << "MyArray的拷贝构造调用" << endl;
    this->capacity = arr.capacity;
    this->size = arr.size;
    // 深拷贝
    this->pAddress = new T[arr.capacity];
    // 将arr中的数据都拷贝过来
    for (int i = 0; i < this->size; ++i) {
      this->pAddress[i] = arr.pAddress[i];
    }
  }

  // 重载operator= 防止浅拷贝问题 并且解决连等时,右值为void的问题(返回自身的引用)
  // 同时,函数自身返回对象的引用,防止调用拷贝构造函数,浪费堆区内存(若不实现深拷贝,还会因重复释放堆区数据而崩溃)
  MyArray &operator=(const MyArray &arr) {
    // cout << "MyArray的operator=调用" << endl;
    // 先判断原先对应的堆区中是否有数据,若有则先释放
    if (this->pAddress != NULL) {
      delete[] this->pAddress;
      this->pAddress = NULL;
      this->size = 0;
      this->capacity = 0;
    }
    // 深拷贝
    this->capacity = arr.capacity;
    this->size = arr.size;
    this->pAddress = new T[arr.capacity];
    for (int i = 0; i < this->size; ++i) {
      this->pAddress[i] = arr.pAddress[i];
    }
    return *this;
  }

  // 尾插法
  MyArray &push(const T &val) {
    // 判断容量是否超出范围
    if (this->size < this->capacity) {
      this->pAddress[this->size] = val;  // 在数组末尾插入数据
      this->size++;  // 更新数组大小
    }
    return *this;  // 返回对象自身引用,实现链式编程
  }

  // 尾删法
  void pop() {
    // 让用户访问不到最后一个元素 即为尾删
    if (this->size == 0) {
      return;
    }
    this->size--;
  }

  // 通过下标方式访问数组元素 重载[]
  // 考虑到 arr[0] = 0 的赋值操作,即函数的调用作为左值,需要返回引用类型
  T &operator[](int index) {
    return this->pAddress[index];
  }

  // 返回数组的容量
  int getCapacity() {
    return this->capacity;
  }

  // 返回数组的大小
  int getSize() {
    return this->size;
  }

private:
  int capacity;  // 数组容量
  int size; // 数组大小
  T *pAddress;  // 指针指向堆区开辟的真实数组
};
