//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<numeric>
//using namespace std; 
//void myprint(int v)
//{
//	cout << v << " ";
//}
//
//void test01()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(20);
//	v2.push_back(50);
//	v2.push_back(90);
//	v2.push_back(500);
//
//	// 求交集 只能是 按顺序排列的 容器 注意要用到 返回的endit
//	vector<int> v3;
//	v3.resize(min(v1.size(), v2.size()));
//	vector<int>::iterator itend =  set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(),itend,myprint);
//	cout << endl;
//
//	// 求并集
//	vector<int> v4;
//	v4.resize(v1.size() + v2.size());
//	vector<int>::iterator it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());
//	for_each(v4.begin(), it, myprint);
//	cout << endl;
//
//	// 求差集  v1容器对v2容器的差集  v1 有的 v2 没有
//	vector<int> v5;
//	v5.resize(max(v1.size(),v2.size()));
//	it = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v5.begin());
//	for_each(v5.begin(), it, myprint);
//	cout << endl;
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
//// 2023-9-7
//// 完成