//#include <iostream>
//using namespace std;
//#include <vector>
//
//// vector ����
///*
//vector<T> v;
//vector(v.begin(),v.end())
//vector(n,elem)
//vector(const vector &vec)
//*/
//void printvector(vector<int> &v)
//{
//	for (vector<int>::iterator it = v.begin();  it!= v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	// 1.
//	vector<int> v1; //Ĭ�Ϲ���
//	for ( int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);
//	
//	//2.ͨ������ķ�ʽ���й���
//	vector<int>v2(v1.begin(), v1.end());
//	printvector(v2);
//
//	//3.n��elem��ʽ����
//	vector<int>v3(10, 100);
//	printvector(v3);
//
//	//3.��������
//	vector<int>v4(v3);
//	printvector(v4);
//}
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