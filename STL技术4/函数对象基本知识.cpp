//#include<iostream>
//#include<string>
//using namespace std;
//// 函数对象 就是 仿函数
///*
//1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以返回值
//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
//3.函数对象可以作为参数传递
//*/
//
//
//
//class Myadd
//{
//public:
//	int operator() (int v1,int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//class Myprint
//{
//
//public:
//	Myprint()
//	{
//		m_count = 0;
//	}
//	void operator() (string s)
//	{
//		cout << s << endl;
//		this->m_count++;
//	}
//
//	int m_count;
//};
//
//void doprint(Myprint &mp,string str)
//{
//	mp(str);
//}
//
//void test01()
//{
//	// 1. 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以返回值
//	Myadd myadd;
//	int sum = myadd(10, 20);
//	cout << sum << endl;
//	
//	// 2.函数对象超出普通函数的概念，函数对象可以有自己的状态
//
//	Myprint myprint;
//	myprint("hello world wowowo");
//	myprint("hello world wowowo");
//	myprint("hello world wowowo");
//	cout << "运行多少次：" << myprint.m_count << endl;
//
//	// 3.函数对象可以作为参数传递
//	doprint(myprint, "hello");
//}
//int main()
//
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 23-9-4
//// 完成