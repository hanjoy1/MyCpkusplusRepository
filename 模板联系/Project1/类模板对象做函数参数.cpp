//# include <iostream>
//using namespace std;
//#include<string>
//// ��ģ���������������
//// 1.ָ����������
//// 2.����ģ�廯
//// 3.������ģ�廯
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
//		cout << "������" << name << "  " << "���䣺" << age<< endl;
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
//	// �鿴���͵Ĵ���
//	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
//}
//
//template <class T>
//void printPerson3(T p)
//{
//	p.showperson();
//	cout << "T������Ϊ��" << typeid(T).name() << endl;
//}
//
//// 1.ָ����������
//void test01()
//{
//	Person<string, int >p("swk", 100);
//	printPerson1(p);
//}
//
//// 2.����ģ�廯
//void test02()
//{
//
//	Person<string, int >p("zbj", 90);
//	printPerson2(p);
//
//}
////3.������ģ�廯
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
//// ���
//// ��һ����ã�ֱ���˵����ɶ���ǿ