//#include<iostream>
//#include<string>
//using namespace std;
//// �������� ���� �º���
///*
//1.����������ʹ��ʱ����������ͨ�����������ã������в��������Է���ֵ
//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
//3.�������������Ϊ��������
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
//	// 1. ����������ʹ��ʱ����������ͨ�����������ã������в��������Է���ֵ
//	Myadd myadd;
//	int sum = myadd(10, 20);
//	cout << sum << endl;
//	
//	// 2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
//
//	Myprint myprint;
//	myprint("hello world wowowo");
//	myprint("hello world wowowo");
//	myprint("hello world wowowo");
//	cout << "���ж��ٴΣ�" << myprint.m_count << endl;
//
//	// 3.�������������Ϊ��������
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
//// ���