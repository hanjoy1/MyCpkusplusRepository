//#include <iostream>
//using namespace std;
//#include <string.h>
//
////函数模板的局限性 并不是万能的
////特定的数据类型 需要特定方式实现
//
//// 对比两个数据类型是否相等
//template<class T>
//bool mycompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//class person
//{
//public:
//	person(string name ,int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	string name;
//	int age;
//};
//
//
//// 利用具体化person版本来实现 俩个人比较
//template<> bool mycompare(person& a, person& b) 
//{
//	if (a.name == b.name && a.age == b.age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//
//void test01()
//{
//	// 正常的
//	int a = 10;
//	int b = 20;
//	bool ret = mycompare(a, b);
//	if (ret)
//	{
//		cout << "a等于b" << endl;
//	}
//	else
//	{
//		cout << "a不等于b" << endl;
//	}
//
//}
//
//void test02()
//{
//	//局限的  
//	person p1("cc", 10);
//	person p2("cc", 10);
//	bool ret = mycompare(p1, p2); //两个自定义的类型实例是不可以用函数模板进行比较的 
//	if (ret)
//	{
//		cout << "p1等于p2" << endl;
//	}
//	else
//	{
//		cout << "p1不等于p2" << endl;
//	}
//	
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//// 2023-8-26
//// 完成
//// 对于特殊类型 写具体化模板函数