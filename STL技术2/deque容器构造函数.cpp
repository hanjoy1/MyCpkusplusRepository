//#include <iostream>
//using namespace std;
//#include<deque>
//// deque容器构造函数
//// deque 和 vector 很相似 只是是双向的
//void printdeque(const deque<int> &d)
//{
//	//进阶 只读状态的传数据 只读状态的迭代器
//	for (deque<int>:: const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	// 第一种
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printdeque(d1);
//
//	//第二种
//	deque<int>d2(d1.begin(), d1.end());
//	printdeque(d2);
//
//	//第三种
//	deque<int>d3(10, 100);
//	printdeque(d3);
//
//	//第四种
//	deque<int>d4(d3);
//	printdeque(d4);
//}
//
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
//// 2023-8-31
//// 完成