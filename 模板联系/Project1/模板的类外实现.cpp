//#include <iostream>
//using namespace std;
//#include<string>
//
//// ��ģ�������ʵ��
//template <class T1,class T2 >
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson() //����ʵ��
//	{
//		cout << "������" << this->m_naem << "  " << "���䣺" << this->m_age << endl;
//
//	}
//
//	
//	void showPerson2(); // ����ʵ��
//
//	T1 m_naem;
//	T2 m_age;
//};
//
//// ���캯��������ʵ��
//template <class T1, class T2 >
//Person<T1,T2>::Person(T1 name, T2 age) 
//{	
//		this->m_naem = name;
//		this->m_age = age;
//}
//
//
//template <class T1, class T2 >
//void Person<T1, T2>:: showPerson2() 
//{
//	cout << "������" << this->m_naem << "  " << "���䣺" << this->m_age << endl;
//
//}
//
//
//void test01()
//{
//	Person<string, int> p("tom", 20);
//	p.showPerson2();
//}
//
//
//int main()
//{
//
//
//	test01();
//	system("pause");
//	return 0;
//
//}
//// 2023-8-29
//// ���