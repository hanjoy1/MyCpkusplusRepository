//#include<iostream>
//#include<map>
//using namespace std;
//
//// map查找和统计
//
//void printmap(map<int,int> m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << (*it).first << " " << "value:" << (*it).second << endl;
//	}
//}
//
//void test01()
//{
//	//构造map容器
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10)); //匿名对组赋值
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	//查找 返回 迭代器
//	map<int, int>::iterator pos = m.find(4); //找的是key 值
//	if (pos != m.end())
//	{
//		cout << "key:" << (*pos).first << "value:" << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "没有" << endl;
//	}
//	// 统计
//	int num = m.count(2); // 统计的也是 key 的 个数  对于map来言就是  0 / 1
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-9-4
//// 完成