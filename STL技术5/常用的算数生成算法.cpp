//#include<iostream>
//#include<vector>
//#include<numeric>
//#include<algorithm>
//using namespace std;
//class myprint
//{
//public:
//	void operator() (int v)
//	{
//		cout << v << " ";
//	}
//};
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i <= 100; i++)
//	{
//		v.push_back(i);
//	}
//
//	// acuumulate 累加
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << total << endl;
//	// 填充容器 这个很有用的
//	v.resize(10);
//	fill(v.begin(), v.end(), 100);
//
//	for_each(v.begin(), v.end(), myprint());
//	
//
//}
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//
//
//}
//
//// 2023-9-7
//// 完成