//#include <iostream>
//#include <set>
//using namespace std;
//// set 容器的插入和删除操作
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
//	set<int> s1;
//	// 插入数据 只有insert方式  不能pushback
//	s1.insert(20);
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	printset(s1);
//
//
//	// 删除  注意会自动排序
//	s1.erase(s1.begin());
//	printset(s1);
//	 
//	// 指定删除
//	s1.erase(20);
//	printset(s1);
//
//	//区间删除
//	s1.erase(s1.begin(), s1.end());
//
//	//清空
//	s1.clear();
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