//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//// 常见的排序算法
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
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(20);
//	v2.push_back(30);
//	v2.push_back(40);
//	v2.push_back(50);
//	v2.push_back(60);
//	v2.push_back(70);
//
//	vector<int> v3;
//	v3.resize(v.size() + v2.size());
//	// 利用sort 进行升序
//
//	sort(v.begin(), v.end());
//	printvector(v);
//
//	// 改变为降序排列
//	sort(v.begin(), v.end(), greater<int>()); 
//	printvector(v);
//
//	// 随机打乱
//	random_shuffle(v.begin(), v.end());
//	printvector(v);
//
//	sort(v.begin(), v.end());
//	printvector(v);
//	 
//	// 合并两个有序容器
//	merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin());
//	printvector(v3);
//
//	// 反转
//	reverse(v3.begin(), v3.end());
//	printvector(v3);
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