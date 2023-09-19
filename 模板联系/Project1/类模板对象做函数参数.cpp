//# include <iostream>
//using namespace std;
//#include<string>
//// 类模板对象做函数参数
//// 1.指定传入类型
//// 2.参数模板化
//// 3.整个类模板化
//
//template <class T1 ,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	void showperson()
//	{
//		cout << "姓名：" << name << "  " << "年龄：" << age<< endl;
//	}
//
//	T1 name;
//	T2 age;
//};
//
//void printPerson1(Person<string,int> p)
//{
//	p.showperson();
//
//}
//
//template <class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	p.showperson();
//	// 查看类型的代码
//	cout << "T1的类型为：" << typeid(T1).name() << endl;
//	cout << "T2的类型为：" << typeid(T2).name() << endl;
//}
//
//template <class T>
//void printPerson3(T p)
//{
//	p.showperson();
//	cout << "T的类型为：" << typeid(T).name() << endl;
//}
//
//// 1.指定传入类型
//void test01()
//{
//	Person<string, int >p("swk", 100);
//	printPerson1(p);
//}
//
//// 2.参数模板化
//void test02()
//{
//
//	Person<string, int >p("zbj", 90);
//	printPerson2(p);
//
//}
////3.整个类模板化
//void test03()
//{
//
//	Person<string, int >p("ts", 30);
//	printPerson3(p);
//
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}
//
//// 2023-8-29
//// 完成
//// 第一种最常用，直接了当，可读性强