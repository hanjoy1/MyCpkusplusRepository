//#include <iostream>
//#include <set>
//using namespace std;
// // set容器 大小和交换
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
//	//打印容器
//	printset(s1);
//
//	//判断是否为空
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else 
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小：" <<s1.size()<< endl;
//	}
//
//	set<int> s2;
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//	s2.insert(500);
//
//	cout << "交换前：" << endl;
//	printset(s1);
//	printset(s2);
//
//	s1.swap(s2);
//	cout << "交换后：" << endl;
//	printset(s1);
//	printset(s2);
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
//// 2023-9-1
//// 完成