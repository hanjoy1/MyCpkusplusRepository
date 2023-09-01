//#include<set>
//#include<iostream>
//using namespace std;
//// set 容器 的排序
//
//
//class mycompare  // 仿函数
//{
//public:
//	bool operator() (int v1, int v2) const //这一点与教学视频不一样 需要加上const
//	{
//		return v1 > v2;
//	}
//
//};
//
//bool mycompare2(int v1 ,int v2)
//{
//	return v1 > v2;
//
//}
//
//
//void test01()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(50);
//	s1.insert(40);
//
//	//默认排序规则是升序
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//	
//	// 指定排序规则
//	set<int,mycompare> s2;  //set容器的排序方式 在插入前 就确定好了；
//	s2.insert(10);
//	s2.insert(20);
//	s2.insert(30);
//	s2.insert(50);
//	s2.insert(40);
//	for (set<int,mycompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-9-1
//// 完成