//#include<iostream>
//#include<map>
//using namespace std;
//
//// map 容器的插入和删除
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
//	// 构造map容器
//	map<int, int> m;
//	// 插入1 建议
//	m.insert(pair<int, int>(1, 10)); //匿名对组赋值
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	//插入2 建议
//	m.insert(make_pair(4, 40));
//
//	//插入3 不推荐
//	m.insert(map<int, int>::value_type(5, 50));
//
//	//插入4 不太建议 插入 建议用来访问
//	m[6] = 60;
//
//	printmap(m);
//	//删除1 map容器的删除
//	m.erase(m.begin()); //迭代器删除
//
//	//删除2
//	m.erase(3); //按照key 删除
//	printmap(m);
//
//	//删除3
//	m.erase(m.begin(), m.end());
//
//	//清空
//	m.clear();
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