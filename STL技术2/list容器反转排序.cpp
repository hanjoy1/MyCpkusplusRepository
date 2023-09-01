//#include<iostream>
//#include<list>
//#include<algorithm>
//using namespace std;
//// list 容器的反转和排序  不支持 算法中的排序 自带有排序函数 
//// 所有不支持随机访问的迭代器不支持算法algorithm->sort()
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
//bool mycompare(int v1 ,int v2)
//{
//	//降序
//	return v1 > v2;
//}
//
//void test01()
//{
//	list<int> l1;
//	l1.push_back(20);
//	l1.push_back(50);
//	l1.push_back(60);
//	l1.push_back(50);
//	l1.push_back(10);
//
//	printlist(l1);
//
//	// 反转
//	l1.reverse();
//	cout << "反转一下" << endl;
//	printlist(l1);
//
//	// 排序
//	l1.sort();
//	cout << "排序一下" << endl;
//	printlist(l1);
//
//	// 排序 自定义
//	l1.sort(mycompare);
//	cout << "自定义排序一下" << endl;
//	printlist(l1);
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