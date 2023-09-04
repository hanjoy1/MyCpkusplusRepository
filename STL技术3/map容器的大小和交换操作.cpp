//#include<iostream>
//#include<map>
//using namespace std;
//// map容器的大小和交换操作
//
//void printmap(map<int, int> m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << (*it).first << "  " << "value:" << (*it).second << endl;
//	}
//
//}
//
//void test01()
//{
//	map<int, int> m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(3, 20));
//	m1.insert(pair<int, int>(2, 30));
//	m1.insert(pair<int, int>(4, 40));
//	printmap(m1);
//
//	// 判断是否为空
//	if (m1.empty())
//	{
//		//为空
//		cout << "容器为空" << endl;
//	}
//	else
//	{
//		cout << "容器不为空" << endl;
//		cout << "容器的大小为：" << m1.size() << endl;
//	}
//
//	map<int, int> m2;
//	m2.insert(pair<int, int>(1, 99));
//	m2.insert(pair<int, int>(3, 88));
//	m2.insert(pair<int, int>(2, 77));
//
//	//交换操作
//	cout << "交换前" << endl;
//	cout << "m1:" << endl;
//	printmap(m1);
//	cout << "m2:" << endl;
//	printmap(m2);
//	m1.swap(m2);
//	cout << "交换后" << endl;
//	cout << "m1:" << endl;
//	printmap(m1);
//	cout << "m2:" << endl;
//	printmap(m2);
//	
//}
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
//// 2023-9-4
//// 完成