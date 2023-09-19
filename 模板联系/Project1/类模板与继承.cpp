//#include <iostream>
//using namespace std;
//// 类模板与继承
//// 当子类继承的父类是一个类模板时。子类在声明时，要指定父类中的T类型
//// 如果不指定，编译器无法给子类分配内存
//// 如果想要灵活指定父类中的T类型，子类也需要变为类模板
//
//template<class T>
//class Base
//{
//	T m;
//};
//class Son : public Base<int> //必须有参数列表 因为子类不是模板 必须有内存分配
//{
//
//};
//
//// 如果想要灵活指定父类中的T类型，子类也需要变为类模板
//template <class T1 ,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的类型是：" << typeid(T1).name() << endl;
//		cout << "T2的类型是：" << typeid(T2).name() << endl;
//
//	}
//	T1 obj;
//};
//
//void test01()
//{
//	Son s1;
//	Son2<int, int> s2; // 第一个传给 T1 是子类的类型 ， 第二个传给 T2 是父类的类型
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-8-29
//// 完成
