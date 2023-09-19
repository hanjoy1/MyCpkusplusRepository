//#include <iostream>
//using namespace std;
//#include <string>
////#include"Person2.h"
////#include"Person2.cpp"   //一般不这样做
//#include"Person2.hpp" //一般用hpp 约定俗成的类模板格式
//
//
////类模板的分文件实现
//// 类模板中的成员函数创建时机是在调用阶段，导致分文件编写时链接不到。
//// 解决方案1 ： 直接包含.cpp源文件
//// 解决方案2 ： 将声明和实现写在同一个文件中，并更改后缀名为.hpp .hpp是约定名称你并不是强制的
//
//
//// 一个cpp
//template<class T1 , class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_name;
//	T2 m_age;
//};
//
//template<class T1, class T2>
//Person<T1,T2>::Person(T1 name,T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名：" << this->m_name << "  " << "年龄：" << this->m_age << endl;
//}
//
//
//
//void test01()
//{
//	Person<string, int >P("TON", 28);
//	P.showPerson();
//	Person2<string, int >P2("jean", 25); //.h 不能自动和 .cpp 产生链接 1.直接包含.cpp
//	P2.showPerson2();
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//// 2023-8-29
//// 完成