//#include<iostream>
//#include<vector>
//#include <algorithm>
//#include<functional>
//using namespace std;
//
//// �ڽ��ĺ������� �߼��º���
//void printvetor(vector<bool> v)
//{
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<bool> v1;
//	v1.push_back(true);
//	v1.push_back(false);
//	v1.push_back(true);
//	v1.push_back(true);
//
//	printvetor(v1);
//
//	// �����߼��� ������v1���˵���һ�������� ���˱����ȿ��ٺÿռ�
//	vector<bool> v2;
//	v2.resize(v1.size());
//
//	transform(v1.begin(),v1.end(),v2.begin(), logical_not<bool>() );
//
//	printvetor(v2);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-9-6
//// ���