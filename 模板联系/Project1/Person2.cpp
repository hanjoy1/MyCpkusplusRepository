#include"Person2.h"

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