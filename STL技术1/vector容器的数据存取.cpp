//#include <iostream>
//using namespace std;
//#include <vector>
//// vector �������ݵĴ�ȡ
//
//
//
//
//void printvector(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);
//
//	//1.���������ŵķ�ʽ��������Ԫ��
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	//2.����at��ʽ����Ԫ��
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//
//	}
//	cout << endl;
//
//	// ���ص�һ��Ԫ��
//	cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;
//
//	//�������һ��Ԫ��
//	cout << "���һ��Ԫ��Ϊ��" << v1.back() << endl;
//
//}
//
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-8-30
//// ���