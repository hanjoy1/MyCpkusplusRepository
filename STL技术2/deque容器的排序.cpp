//#include<iostream>
//#include<deque>
//#include<algorithm>
//using namespace std;
//// deque容器的排序操作
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
//		d1.push_front(i);
//	}
//	printdque(d1);
//
//	//排序
//	sort(d1.begin(),d1.end());  //默认从小到大
//	cout << "排序后" << endl;
//	printdque(d1);
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