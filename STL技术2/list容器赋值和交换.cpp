//#include<iostream>
//#include<list>
//using namespace std;
//// list 容器 赋值和交换
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
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	
//	printlist(l1);
//
//	// 赋值
//	list<int> l2 = l1;
//	printlist(l2);
//
//	//assign赋值
//	list<int> l3;
//	l3.assign(l2.begin(), l2.end());
//	printlist(l3);
//
//	//
//	list<int> l4(10, 100);
//	printlist(l4);
//}
//
//// 交换
//void test02()
//{
//	list<int> l1;
//
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	list<int> l2(10, 100);
//
//	cout << "交换前：" << endl;
//	printlist(l1);
//	printlist(l2);
//	
//	cout << "交换后：" << endl;
//	l1.swap(l2);
//	printlist(l1);
//	printlist(l2);
//
//
//}
//
//
//int main()
//{
//
//	test02();
//	system("pause");
//	return 0;
//}
//
//// 2023-9-1
//// 完成