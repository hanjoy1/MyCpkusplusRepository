//#include<iostream>
//#include<list>
//using namespace std;
//// list 构造函数 与其他容器大同小异
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
//
//	//添加
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	l1.push_back(50);
//
//	printlist(l1);
//	//
//	list<int> l2(l1.begin(), l1.end());
//	printlist(l2);
//	//
//	list<int> l3(l2);
//	printlist(l3);
//	//
//	list<int> l4(10, 1000);
//	printlist(l4);
//
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