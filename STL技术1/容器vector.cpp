//#include <iostream>
//using namespace std;
//#include <vector>
//#include<algorithm>
//// ���� �㷨 ������
//// vector �������������������
//
//void myprint(int val)
//{
//	cout << val << endl;
//}
//
//
//
//void test01() //ϵͳ�Դ�����������
//{
//	// ����һ��vector ��Ҫͷ�ļ�
//	vector<int> v;
//	// �����������������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	//ͨ�����������������е�����
//	vector<int>::iterator itBegin = v.begin(); //��ʼ������ ָ�������еĵ�һ��Ԫ��
//	vector<int>::iterator itEnd = v.end(); //ָ�����һ��Ԫ�ص���һ��Ԫ��
//
//	//��һ�ֱ�����ʽ
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin ++ ;
//	}
//
//	//�ڶ��ֱ�����ʽ
//	for (vector<int>::iterator it = v.begin();  it != v.end() ; it++)
//	{
//		cout << *it << endl;
//	}
//
//	//�����ֱ�����ʽ
//	for_each(v.begin(), v.end(), myprint);
//}
//
//
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
//// 2023-8-30
//// ���