//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//// ���õĿ������滻�㷨 copy
//
//class mycompare
//{
//public:
//	bool operator() (int v)
//	{
//
//		return v > 50;
//	}
//
//};
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
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(60);
//	v.push_back(80);
//	printvector(v);
//
//
//	// ����һ��v2
//	vector<int> v2;
//	v2.resize(v.size());
//	copy(v.begin(), v.end(), v2.begin());
//	printvector(v2);
//
//	// �滻
//	replace(v.begin(), v.end(), 20, 2000);
//	printvector(v);
//
//	// ������ �滻
//	replace_if(v.begin(), v.end(), mycompare(), 1000);
//	printvector(v);
//
//	// ������������ ������ͬ������ swap
//	swap(v, v2);
//	printvector(v);
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
//// 2023-9-7
//// ���