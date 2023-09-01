//#include<iostream>
//#include<deque>
//using namespace std;
//// deque数据存取 与vector 完全一致
//
//void printdque(const deque<int> d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//
//	// at访问
//	for (int i = 0; i < 5; i++)
//	{
//		cout << d1.at(i) << endl;
//	}
//
//	// []访问
//	for (int i = 0; i < 5; i++)
//	{
//		cout << d1[i] << endl;
//	}
//
//	//访问头部
//	cout << "d1的第一个元素:" << d1.front() << endl;
//	//访问尾部
//	cout << "d1的最后一个元素:" << d1.back() << endl;
//
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}
//
//// 2023-8-31
//// 完成