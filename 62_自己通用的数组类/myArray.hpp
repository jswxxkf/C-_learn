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
    // cout << "MyArray���вι������" << endl;
    this->capacity = capacity;
    this->size = 0;
    this->pAddress = new T[this->capacity];
  }

  ~MyArray() {
    // cout << "MyArray��������������" << endl;
    if (this->pAddress != NULL) {
      delete[] this->pAddress;
      this->pAddress = NULL;
    }
  }

  //��������
  MyArray(const MyArray &arr) {
    cout << "MyArray�Ŀ����������" << endl;
    this->capacity = arr.capacity;
    this->size = arr.size;
    // ���
    this->pAddress = new T[arr.capacity];
    // ��arr�е����ݶ���������
    for (int i = 0; i < this->size; ++i) {
      this->pAddress[i] = arr.pAddress[i];
    }
  }

  // ����operator= ��ֹǳ�������� ���ҽ������ʱ,��ֵΪvoid������(�������������)
  // ͬʱ,���������ض��������,��ֹ���ÿ������캯��,�˷Ѷ����ڴ�(����ʵ�����,�������ظ��ͷŶ������ݶ�����)
  MyArray &operator=(const MyArray &arr) {
    // cout << "MyArray��operator=����" << endl;
    // ���ж�ԭ�ȶ�Ӧ�Ķ������Ƿ�������,���������ͷ�
    if (this->pAddress != NULL) {
      delete[] this->pAddress;
      this->pAddress = NULL;
      this->size = 0;
      this->capacity = 0;
    }
    // ���
    this->capacity = arr.capacity;
    this->size = arr.size;
    this->pAddress = new T[arr.capacity];
    for (int i = 0; i < this->size; ++i) {
      this->pAddress[i] = arr.pAddress[i];
    }
    return *this;
  }

  // β�巨
  MyArray &push(const T &val) {
    // �ж������Ƿ񳬳���Χ
    if (this->size < this->capacity) {
      this->pAddress[this->size] = val;  // ������ĩβ��������
      this->size++;  // ���������С
    }
    return *this;  // ���ض�����������,ʵ����ʽ���
  }

  // βɾ��
  void pop() {
    // ���û����ʲ������һ��Ԫ�� ��Ϊβɾ
    if (this->size == 0) {
      return;
    }
    this->size--;
  }

  // ͨ���±귽ʽ��������Ԫ�� ����[]
  // ���ǵ� arr[0] = 0 �ĸ�ֵ����,�������ĵ�����Ϊ��ֵ,��Ҫ������������
  T &operator[](int index) {
    return this->pAddress[index];
  }

  // �������������
  int getCapacity() {
    return this->capacity;
  }

  // ��������Ĵ�С
  int getSize() {
    return this->size;
  }

private:
  int capacity;  // ��������
  int size; // �����С
  T *pAddress;  // ָ��ָ��������ٵ���ʵ����
};
