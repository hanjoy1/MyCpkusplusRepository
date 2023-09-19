#pragma once
#include <iostream>
using namespace std;
#include <string>


template<class T1, class T2>
class Person2
{
public:
	Person2(T1 name, T2 age);
	void showPerson2();
	T1 m_name;
	T2 m_age;
};


