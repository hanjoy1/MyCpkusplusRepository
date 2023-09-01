//#include<iostream>
//#include<list>
//using namespace std;
//// list 容器 插入和删除 和别的容器大同小异 多了 remove()
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
//	// 尾插
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	l1.push_back(50);
//	printlist(l1);
//
//	// 头插
//	l1.push_front(10);
//	l1.push_front(20);
//	l1.push_front(30);
//	l1.push_front(40);
//	l1.push_front(50);
//	printlist(l1);
//
//	// 尾删
//	l1.pop_back();
//	printlist(l1);
//
//	//头删
//	l1.pop_front();
//	printlist(l1);
//
//	//insert 插入
//	l1.insert(l1.begin(), 1000);
//	printlist(l1);
//
//	list<int>::iterator it = l1.begin();
//	it++;
//	l1.insert(it, 5005);
//	printlist(l1);
//
//	//删除
//	it = l1.begin();
//	l1.erase(it);
//
//	//**移除**
//	l1.remove(5005); //删除 值 所有一样的都删
//	printlist(l1);
//
//	//清理
//	l1.clear();
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