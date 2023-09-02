//#include <iostream>
//using namespace std;
//#include <vector>
//// vector 容器的插入与删除
///*
//push_back(eld) //尾部插入
//pop_back() //尾部删除
//insert(const_iterator pos, ele);
//insert(const_iterator pos, int count, ele);
//erase(const_iterator pos);
//erase(const_iterator start, const_iterator end);
//clear();
//*/
//void printvector(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);
//
//	//尾删
//	v1.pop_back();
//	printvector(v1);
//
//	// 插入 利用迭代器指定位置
//	v1.insert(v1.begin(), 100); 
//	printvector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printvector(v1);
//
//	//删除 利用迭代器指定删除位置
//	v1.erase(v1.begin());
//	printvector(v1);
//
//	//删除 利用迭代器指定删除区间  
//	v1.erase(v1.begin(), v1.end());  //这样写 等于 清空了
//	printvector(v1);
//
//	//清空
//	v1.clear();
//	printvector(v1);
//}
//
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-8-30
//// 完成
