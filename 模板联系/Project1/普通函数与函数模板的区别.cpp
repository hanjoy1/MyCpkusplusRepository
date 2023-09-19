//#include<iostream>
//using namespace std;
//
////普通函数与模板函数的区别
//
////1.普通函数调用可以发生隐式类型转换
////2.函数模板 用自动类型推导，不可以发生隐式类型转换
////3.函数模板 用显示指定类型，可以发生隐式类型转换
//
////普通函数
//int myAdd(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template<class T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd(a, b) << endl;
//	cout << myAdd(a, c) << endl; //可以运行得出109 发生隐式字符转换了 c->->99
//
//	cout << myAdd02(a, b) << endl; 
//	//cout << myAdd02(a, c) << endl; //这就出错了 ，不能发生隐式转换
//	cout << myAdd02<int>(a, c) << endl; //指定类型则可以发生隐式转换
//}
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
//// 使用模板时，尽量指定类型