#pragma once
#include <iostream>
using namespace std;
#include <string>
//将两文件写在一起 解决类模板分文件编写链接不到的问题

template<class T1, class T2>
class Person2
{
public:
	Person2(T1 name, T2 age);
	void showPerson2();
	T1 m_name;
	T2 m_age;
};



// 分文件 一旦实例就出错了
template<class T1, class T2>
Person2<T1, T2>::Person2(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

template<class T1, class T2>
void Person2<T1, T2>::showPerson2()
{
	cout << "姓名：" << this->m_name << "  " << "年龄：" << this->m_age << endl;
}
