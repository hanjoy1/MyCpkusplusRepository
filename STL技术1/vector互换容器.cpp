//#include <iostream>
//using namespace std;
//#include <vector>
//// vector 容器 互换容器操作
//
//
//
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
//	vector<int> v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printvector(v2);
//
//	// 两个容器互换
//	v1.swap(v2);
//	cout << "交换" << endl;
//	printvector(v1);
//	printvector(v2);
//
//}
//
//// 巧用swap()
//void test02()
//{
//	// 生成有10万个元素的容器v1
//	vector<int> v1;
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//	}
//
//	cout << "v1的容量是：" << v1.capacity() << endl;   
//	cout << "v1的大小是：" << v1.size() << endl;
//
//	v1.resize(3);
//	cout << "重新指定大小后：" << endl;
//	cout << "v1的容量是：" << v1.capacity() << endl;    //这个非常大，浪费空间
//	cout << "v1的大小是：" << v1.size() << endl;
//
//	//巧用swap收缩内存
//	vector<int>(v1).swap(v1); //匿名对象执行后会自动销毁
//	cout << "交换后：" << endl;
//	cout << "v1的容量是：" << v1.capacity() << endl;    //这个非常大，浪费空间
//	cout << "v1的大小是：" << v1.size() << endl;
//}
//
//
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
//
//// 20238-30
//// 完成