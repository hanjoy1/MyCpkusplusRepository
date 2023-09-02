//#include <iostream>
//using namespace std;
//#include <vector>
////vector容器的容量和大小
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
//	if (v1.empty()) //为真 代表为空
//	{
//
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为："<<v1.capacity() << endl; //容量会动态扩展 ： 删除原有内存 开辟更大的内存
//		cout << "v1的大小为："<< v1.size() << endl;
//	}
//
//	//重新指定大小
//	v1.resize(15);
//	printvector(v1); //如果重新指定的过长 默认用0填充 也可以指定填充值 
//	v1.resize(15, 5);
//	printvector(v1);
//	v1.resize(5); //如果指定短了 超出的部分会被删掉
//	printvector(v1);
//
//}
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