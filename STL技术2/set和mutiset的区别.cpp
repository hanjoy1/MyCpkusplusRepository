//#include<set>
//#include<iostream>
//using namespace std;
//// set 和 multiset 的区别
//
//
//void test01()
//{
//	set<int> s1;
//	pair<set<int>::iterator, bool> ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "插入成功" << endl;
//	}
//	else
//	{
//		cout << "插入失败" << endl;
//	}
//
//	ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//
//	multiset <int> ms;
//	//允许插入重复值
//	ms.insert(10);
//	ms.insert(10);
//	for (multiset<int>::iterator it = ms.begin() ; it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//	system("pasue");
//	return 0;
//}
//
//// 2023-9-1
//// 完成