//#include <iostream>
//using namespace std;
//#include <string.h>
//
////����ģ��ľ����� ���������ܵ�
////�ض����������� ��Ҫ�ض���ʽʵ��
//
//// �Ա��������������Ƿ����
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
//// ���þ��廯person�汾��ʵ�� �����˱Ƚ�
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
//	// ������
//	int a = 10;
//	int b = 20;
//	bool ret = mycompare(a, b);
//	if (ret)
//	{
//		cout << "a����b" << endl;
//	}
//	else
//	{
//		cout << "a������b" << endl;
//	}
//
//}
//
//void test02()
//{
//	//���޵�  
//	person p1("cc", 10);
//	person p2("cc", 10);
//	bool ret = mycompare(p1, p2); //�����Զ��������ʵ���ǲ������ú���ģ����бȽϵ� 
//	if (ret)
//	{
//		cout << "p1����p2" << endl;
//	}
//	else
//	{
//		cout << "p1������p2" << endl;
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
//// ���
//// ������������ д���廯ģ�庯��