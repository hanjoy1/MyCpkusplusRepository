//# include<iostream>
//using namespace std;
////类模板成员函数的创建时机
////类模板中成员在调用时才去创建
//
//class Person1
//{
//public:
//	void showperson1()
//	{
//		cout << "person1 show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showperson2()
//	{
//		cout << "person2 show" << endl;
//	}
//};
//
//template <class T>
//class MyClass
//{
//public:
//	T obj;
//	// 类模板中的成员函数
//	//这样写是可以成功编译的
//	//只有调用时才会创建
//	void func1()
//	{
//		obj.showperson1();
//	}
//	void func2()
//	{
//		obj.showpersin2();
//	}
//
//};
//
//void test01()
//{
//	MyClass<Person1>m;
//	//调用时 才会创建 
//	m.func1();    
//}
//
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-8-29
//// 完成