//#include<iostream>
//using namespace std;
//
////��ͨ������ģ�庯��������
//
////1.��ͨ�������ÿ��Է�����ʽ����ת��
////2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
////3.����ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��
//
////��ͨ����
//int myAdd(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
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
//	cout << myAdd(a, c) << endl; //�������еó�109 ������ʽ�ַ�ת���� c->->99
//
//	cout << myAdd02(a, b) << endl; 
//	//cout << myAdd02(a, c) << endl; //��ͳ����� �����ܷ�����ʽת��
//	cout << myAdd02<int>(a, c) << endl; //ָ����������Է�����ʽת��
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
//// ���
//// ʹ��ģ��ʱ������ָ������