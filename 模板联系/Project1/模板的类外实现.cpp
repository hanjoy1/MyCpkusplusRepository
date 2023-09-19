//#include <iostream>
//using namespace std;
//#include<string>
//
//// 类模板的内外实现
//template <class T1,class T2 >
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson() //内类实现
//	{
//		cout << "姓名：" << this->m_naem << "  " << "年龄：" << this->m_age << endl;
//
//	}
//
//	
//	void showPerson2(); // 类外实现
//
//	T1 m_naem;
//	T2 m_age;
//};
//
//// 构造函数的内外实现
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
//	cout << "姓名：" << this->m_naem << "  " << "年龄：" << this->m_age << endl;
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
//// 完成