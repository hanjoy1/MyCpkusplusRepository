//#include <iostream>
//#include <set>
//using namespace std;
//// set 容器构造 底层是二叉树 
//// 
//
//void printset(set<int> s)
//{
//	for (set<int> ::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//
//	set<int> s1;
//	// 插入数据 只有insert方式  不能pushback
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	// 遍历容器
//	printset(s1);  // set 容器的特点 所有的元素在插入时候会自动排序 所有 不允许插入相同的元素
//
//	//赋值
//	set<int> s2 = s1;
//	printset(s2);
//
//	//拷贝
//	set<int> s3(s1);
//	printset(s3);
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
//// 2023-9-1
//// 完成