//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//// 按条件查找 需要加个谓词
//
//class Greaterfive
//{
//public:
//	bool operator() (int val)
//	{
//		return val > 5;
//	}
//
//};
//
//class Preson
//{
//public:
//	Preson(string name ,int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//class Greaterfive2
//{
//public:
//	bool operator() (Preson p)
//	{
//		return p.m_age > 100;
//	}
//
//};
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), Greaterfive());
//
//	if ( it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了:" << (*it) << endl;
//
//	}
//
//	// 自定义对象
//	Preson p1("asda", 54);
//	Preson p2("gys", 45);
//	Preson p3("uhfiw", 6341);
//	Preson p4("fuiehf", 53);
//	vector<Preson> p;
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	p.push_back(p4);
//	vector<Preson>::iterator  it2 = find_if(p.begin(), p.end(), Greaterfive2());
//	if (it2 == p.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << (*it2).m_name << "  " << (*it2).m_age << endl;
//
//	}
//	
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//// 2023-9-6
//// 完成