//#include <iostream>
//using namespace std;
//#include<string>
//// 类模板与友元
//// 全局函数类内实现 直接在类内声明友元即可
//// 全局函数的类外实现 需要提前让编译器知道全局函数的存在
//
//
//
//
//// 类外实现
//template <class T1, class T2>
//class Person;
//
//template <class T1, class T2>
//void PrintPersom2(Person<T1, T2> p)
//{
//	cout << "姓名：" << p.m_name << "  " << "年龄：" << p.m_age << endl;
//}
//
//
//
//
//
//
//// 通过全局函数打印信息
//template <class T1,class T2>
//class Person
//{
//	//全局函数类内实现
//	friend void PrintPersom(Person<T1, T2> p)
//	{
//		cout << "姓名：" << p.m_name << "  " << "年龄：" << p.m_age << endl;
//	}
//
//	//类外实现
//	friend void PrintPersom2<>(Person<T1, T2> p); //类外实现要加列表 让编译器知道是函数模板的声明 而且要写在类的前面，让编译器提前知道 函数 和 类 的存在
//public:
//	Person(T1 name ,T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
//
//
//
//void test01()
//{
//	Person<string, int > p("tom", 20);
//
//	PrintPersom(p);
//	PrintPersom2(p);
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