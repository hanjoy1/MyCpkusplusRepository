//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//// 常用的拷贝和替换算法 copy
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
//	// 拷贝一个v2
//	vector<int> v2;
//	v2.resize(v.size());
//	copy(v.begin(), v.end(), v2.begin());
//	printvector(v2);
//
//	// 替换
//	replace(v.begin(), v.end(), 20, 2000);
//	printvector(v);
//
//	// 按条件 替换
//	replace_if(v.begin(), v.end(), mycompare(), 1000);
//	printvector(v);
//
//	// 互换容器内容 必须是同种类型 swap
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
//// 完成