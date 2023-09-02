//#include <iostream>
//using namespace std;
//#include <vector>
//#include<algorithm>
//// 容器 算法 迭代器
//// vector 容器存放内置数据类型
//
//void myprint(int val)
//{
//	cout << val << endl;
//}
//
//
//
//void test01() //系统自带的数据类型
//{
//	// 创建一个vector 需要头文件
//	vector<int> v;
//	// 向容器里面插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	//通过迭代器访问容器中的数据
//	vector<int>::iterator itBegin = v.begin(); //起始迭代器 指向容器中的第一个元素
//	vector<int>::iterator itEnd = v.end(); //指向最后一个元素的下一个元素
//
//	//第一种遍历方式
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin ++ ;
//	}
//
//	//第二种遍历方式
//	for (vector<int>::iterator it = v.begin();  it != v.end() ; it++)
//	{
//		cout << *it << endl;
//	}
//
//	//第三种遍历方式
//	for_each(v.begin(), v.end(), myprint);
//}
//
//
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
//// 2023-8-30
//// 完成