//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//// 谓词 是 返回值为bool 的仿函数
//// 谓词 根据仿函数传入参数的个数 分为 一元谓词 和 二元谓词
//// 一元谓词
//
//class Greaterfive // 谓词 
//{
//public:
//	bool const operator() (int v)
//	{
//		return v > 5;
//	}
//};
//
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	// 查找一下有没有大于5的数
//	//vector<int>::iterator it =  find_if(v.begin(), v.end(), Greaterfive()); // 匿名函数对象
//	Greaterfive fg;  //实例化谓词
//	vector<int>::iterator it = find_if(v.begin(), v.end(), fg); // 匿名函数对象
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << (*it) << endl;
//	}
//
//
//
//}
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