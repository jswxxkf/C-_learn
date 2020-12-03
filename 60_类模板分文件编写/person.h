//
// Created by 29024 on 2020/12/3.
//

#ifndef CPP_LEARN_PERSON_H
#define CPP_LEARN_PERSON_H

#endif //CPP_LEARN_PERSON_H

#pragma once
#include <iostream>

using namespace std;

template<class T1, class T2>
class Person {
public:
  T1 name;
  T2 age;

  void showPerson();

  Person(T1 name, T2 age);
};