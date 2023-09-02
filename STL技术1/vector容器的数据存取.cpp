//#include <iostream>
//using namespace std;
//#include <vector>
//// vector 容器数据的存取
//
//
//
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
//
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);
//
//	//1.利用中括号的方式访问数组元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	//2.利用at方式访问元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//
//	}
//	cout << endl;
//
//	// 返回第一个元素
//	cout << "第一个元素为：" << v1.front() << endl;
//
//	//返回最后一个元素
//	cout << "最后一个元素为：" << v1.back() << endl;
//
//}
//
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
//// 完成