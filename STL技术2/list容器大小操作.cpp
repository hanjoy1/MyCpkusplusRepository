//#include<iostream>
//#include<list>
//using namespace std;
//// list 容器大小操作 
//
//void printlist(const list<int> l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	printlist(l1);
//
//	// 判断是否为空
//	if (l1.empty())
//	{
//		cout << "l1为空" << endl;
//	}
//	else
//	{
//		cout << "不为空" << endl;
//		cout << "l1的个数：" << l1.size() << endl;
//	}
//
//	//重新指定大小 和其他容器大同小异的操作
//	l1.resize(10);
//	printlist(l1);
//
//	l1.resize(15, 2);
//	printlist(l1);
//
//	l1.resize(1);
//	printlist(l1);
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
//// 2023-9-1
//// 完成