//#include <iostream>
//#include <deque>
//using namespace std;
//// deque容器 的大小操作 与vector 几乎一致
//// deque容器 是没有容量概念的
//
//void printdeque(const deque<int> d)
//{
//	for (deque<int> :: const_iterator  it = d.begin();it != d.end(); it++)
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
//	printdeque(d1);
//
//	if (d1.empty()) // 为空返回真
//	{
//		cout << "容器为空" << endl;
//	}
//	else
//	{
//		cout << "容器不为空" << endl;
//		cout << "容器大小为：" << d1.size() << endl;
//	}
//
//	d1.resize(15);
//	cout << "重新指定大小为15后 ：" << "容器大小为：" << d1.size() << endl;
//	d1.resize(15,1);
//	printdeque(d1);
//	d1.resize(5);
//	cout << "重新指定大小为5后 ：" << "容器大小为：" << d1.size() << endl;
// 
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return  0;
//}
//
//// 2023-8-31
//// 完成