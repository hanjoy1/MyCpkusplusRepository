//#include <iostream>
//using namespace std;
//#include <string>
////#include"Person2.h"
////#include"Person2.cpp"   //һ�㲻������
//#include"Person2.hpp" //һ����hpp Լ���׳ɵ���ģ���ʽ
//
//
////��ģ��ķ��ļ�ʵ��
//// ��ģ���еĳ�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ�����
//// �������1 �� ֱ�Ӱ���.cppԴ�ļ�
//// �������2 �� ��������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp .hpp��Լ�������㲢����ǿ�Ƶ�
//
//
//// һ��cpp
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
//	cout << "������" << this->m_name << "  " << "���䣺" << this->m_age << endl;
//}
//
//
//
//void test01()
//{
//	Person<string, int >P("TON", 28);
//	P.showPerson();
//	Person2<string, int >P2("jean", 25); //.h �����Զ��� .cpp �������� 1.ֱ�Ӱ���.cpp
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
//// ���