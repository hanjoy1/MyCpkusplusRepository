//#include <iostream>
//#include <deque>
//using namespace std;
//// deque的插入与删除 与vector相比 多了头插
//
//void printdeque(const deque<int> d)
//{
//	for (deque<int> ::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	// 插入数据//
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i); // 尾插
//		d1.push_front(i); // 头插
//	}
//	printdeque(d1);
//
//	// 删除数据
//	for (int i = 0; i < 10; i++)
//	{
//		d1.pop_back(); //尾删
//	}
//	d1.pop_front(); //头删
//	printdeque(d1);
//}
//
//void test02()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	printdeque(d1);
//
//	// insert 插入
//	d1.insert(d1.begin(), 1000);
//	printdeque(d1);
//
//	// insert 插入 2
//	d1.insert(d1.begin(),2,10000);
//	printdeque(d1);
//
//	// insert 插入 区间插入
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//
//	//删除
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//
//	//删除 区间
//	d1.erase(d1.begin(), d1.end());  //这样写等于清空了
//
//	//清空
//	d1.clear();
//
//}
//
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
//
//// 2023-8-31
//// 完成
