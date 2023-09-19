//#include <iostream>
//using namespace std;
////普通函数和函数模板的调用规则
////1.如果函数模板和普通函数都可以调用 优先调用普通函数
////2.可以通过空模板参数列表 强制调用 函数模板
////3.函数模板可以函数重载
////4.如果函数模板可以产生更好的匹配 优先调用函数模板
//
//void myprint(int a,int b)
//{
//	cout << "这是一个普通函数" << endl;
//}
//
////
//template<class T>
//void myprint(T a, T b)
//{
//	cout << "这是一个函数模板" << endl;
//}
//
//template<class T>
//void myprint(T a, T b, T c)
//{
//	cout << "这是一个重载函数模板" << endl;
//}
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	char d = 'a';
//	char e = 'c';
//	myprint(a, b);
//
//	//通过空模板的参数列表 强制调用函数模板
//	myprint<>(a, b);
//
//	//函数模板也可以重载
//	myprint(a, b, c);
//
//	//如果函数模板可以产生更好的匹配 优先调用函数模板
//	myprint(d, e);
//}
//
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}
//
//// 2023-8-29
//// 完成
//// 尽量不要同时出现 函数模板 函数