//#include<iostream>
//#include<map>
//using namespace std;
//
//// map 排序
//
//class mycompare 
//{
//public:
//	bool operator() (int v1,int v2) const
//	{
//		// 降序
//		return v1 > v2;
//	}
//};
//
//
//void printmap(map<int,int,mycompare> m)
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
//	// 改变排序顺序 利用仿函数
//
//
//	map<int, int,mycompare> m2;
//	m2.insert(pair<int, int>(1, 10)); //匿名对组赋值
//	m2.insert(pair<int, int>(2, 20));
//	m2.insert(pair<int, int>(3, 30));
//	printmap(m2);
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