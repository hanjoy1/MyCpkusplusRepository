//#include <iostream>
//using namespace std;
//#include<string>
//// 类模板与函数模板的区别
//// 1.类模板没有自类型推导的功能
//// 2.类模板在模板参数列表中可以有默认参数
//
//template<class nametype , class agetype = int>
//class Person
//{
//public:
//
//	Person(nametype name ,agetype age)
//	{
//
//	}
//	void showperson()
//	{
//		cout << "姓名：" << name << "  " << "年龄" << age << endl;
//	}
//	nametype name;
//	agetype age;
//};
//
//
//void test01()
//{
//	//Person p ("aaa",100) // 这句是错误的 无法自动类型推导
//	Person<string, int > p("aa", 100); //必须指定类型列表
//}
//void test02()
//{
//	Person<string>("zz", 99); //年龄有默认类型 函数模板是不允许用的
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