//#include<set>
//#include<iostream>
//using namespace std;
////set容器的查找和统计
//
//void printset(set<int> s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	set<int> s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(60);
//	s1.insert(20);
//	s1.insert(90);
//
//	//查找对应元素的迭代器
//	set<int> ::iterator pos = s1.find(30);
//	if (pos != s1.end()) //找不到会返回 s1.end()
//	{
//		cout << "找到了" << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	int num = s1.count(30); //对于set而言只有0/1；
//	cout <<"num=" << num << endl;
//
//
//
//
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
//
//}
//
//// 2023-9-1
//// 完成