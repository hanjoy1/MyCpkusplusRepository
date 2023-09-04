//#include<iostream>
//#include<map>
//using namespace std;
//
//// map 所有的元素都是pair
//// map pair 第一个为key 第二个为value
//// map 所有的元素 自动按 key 值排序 底层是二叉树
//// map 高性能 高效率
//// nultimap 可以有重复的key值
//
//void printmap(map<int,int> m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << (*it).first << " " << "value:" << (*it).second << endl;
//	}
//}
//
//
//void test01()
//{
//	//构造map容器
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10)); //匿名对组赋值
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	
//	printmap(m);
//
//	// 拷贝构造
//	map<int, int> m2(m);
//	// 赋值
//	map<int, int> m3;
//	m3 = m2;
//
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//
//}
//
//// 2023-9-4
//// 完成