//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//// �����ظ�Ԫ�ز����㷨 
//
//
//void test01()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(60);
//	v1.push_back(10);
//	v1.push_back(50);
//	v1.push_back(50);
//	
//
//	// ֻ���Ҵ����ڵ��ظ�Ԫ�� ��������� 10 ���Ҳ����� ��50����
//	vector<int>::iterator it  = adjacent_find(v1.begin(), v1.end());
//	if (it == v1.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ�" << (*it) << endl;
//
//	}
//
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