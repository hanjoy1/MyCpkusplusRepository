//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void printvector1(vector<int> v)
//{
//	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//class print01
//{
//public:
//	void operator() (int log)
//	{
//		cout << log << " ";
//	}
//};
//
//class Transform1
//{
//public:
//	int operator() (int v)
//	{
//		return v+100;
//	}
//
//
//};
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	for_each(v1.begin(),v1.end(),print01());
//
//	cout << endl;
//	vector<int> v2;
//	v2.resize(v1.size());
//
//	transform(v1.begin(), v1.end(), v2.begin(), Transform1());
//
//
//	for_each(v2.begin(), v2.end(), print01());
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
//// Íê³É