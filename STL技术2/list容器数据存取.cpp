//#include<iostream>
//#include<list>
//using namespace std;
//// list 容器数据的存取 不支持 at [] 迭代器不能跳 只能++  -- 不能 += -=
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
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	l1.push_back(50);
//
//	// 可以访问头尾 和其他容器类似
//	cout << "l1的第一个元素为：" << l1.front() << endl;;
//	cout << "l1的最后一个元素为：" << l1.back() << endl;
//
//	// 验证迭代器的类型
//
//	list<int> ::iterator it = l1.begin();
//	it++; 
//	it--; //是否支持双向
//	//it += 1; //是否支持随机访问 报错了就说明不支持
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