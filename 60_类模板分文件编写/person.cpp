//
// Created by 29024 on 2020/12/3.
//

#include "person.h"
#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
  this->name = name;
  this->age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson() {
  cout << "ÐÕÃû£º" << this->name << " ÄêÁä£º" << this->age << endl;
}