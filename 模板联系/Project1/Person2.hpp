#pragma once
#include <iostream>
using namespace std;
#include <string>
//�����ļ�д��һ�� �����ģ����ļ���д���Ӳ���������

template<class T1, class T2>
class Person2
{
public:
	Person2(T1 name, T2 age);
	void showPerson2();
	T1 m_name;
	T2 m_age;
};



// ���ļ� һ��ʵ���ͳ�����
template<class T1, class T2>
Person2<T1, T2>::Person2(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

template<class T1, class T2>
void Person2<T1, T2>::showPerson2()
{
	cout << "������" << this->m_name << "  " << "���䣺" << this->m_age << endl;
}
