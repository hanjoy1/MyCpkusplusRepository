//#include <iostream>
//using namespace std;
//#include<string>
//// ��ģ������Ԫ
//// ȫ�ֺ�������ʵ�� ֱ��������������Ԫ����
//// ȫ�ֺ���������ʵ�� ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
//
//
//
//
//// ����ʵ��
//template <class T1, class T2>
//class Person;
//
//template <class T1, class T2>
//void PrintPersom2(Person<T1, T2> p)
//{
//	cout << "������" << p.m_name << "  " << "���䣺" << p.m_age << endl;
//}
//
//
//
//
//
//
//// ͨ��ȫ�ֺ�����ӡ��Ϣ
//template <class T1,class T2>
//class Person
//{
//	//ȫ�ֺ�������ʵ��
//	friend void PrintPersom(Person<T1, T2> p)
//	{
//		cout << "������" << p.m_name << "  " << "���䣺" << p.m_age << endl;
//	}
//
//	//����ʵ��
//	friend void PrintPersom2<>(Person<T1, T2> p); //����ʵ��Ҫ���б� �ñ�����֪���Ǻ���ģ������� ����Ҫд�����ǰ�棬�ñ�������ǰ֪�� ���� �� �� �Ĵ���
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
//// ���