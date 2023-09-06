//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//// 相邻重复元素查找算法 
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
//	// 只能找打相邻的重复元素 这个例子中 10 是找不到的 而50可以
//	vector<int>::iterator it  = adjacent_find(v1.begin(), v1.end());
//	if (it == v1.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << (*it) << endl;
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
//// 完成