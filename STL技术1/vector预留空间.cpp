//#include <iostream>
//using namespace std;
//#include <vector>
//// vector Ԥ���ռ�
//// ���ٶ�̬��չ�Ĵ��� 
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
//// û��Ԥ���ռ�
//void test01()
//{
//	
//	int num = 0;
//	int* p = NULL;
//	vector<int> v1;
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//		if (p != &v1[0] )
//		{
//			p = &v1[0];
//			num++;
//		}
//	}
//	cout << "���ٶ��ٴΣ�" << num << endl;
//}
//
//
//// ��ǰԤ���ռ�
//void test02()
//{
//
//	int num = 0;
//	int* p = NULL;
//	vector<int> v1;
//	v1.reserve(100000);
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//		if (p != &v1[0])
//		{
//			p = &v1[0];
//			num++;
//		}
//	}
//	cout << "���ٶ��ٴΣ�" << num << endl;
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
//
//// 2023-8-30
//// ���