#include"Person2.h"

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