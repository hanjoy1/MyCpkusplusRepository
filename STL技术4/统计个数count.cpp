//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//// 常用查找算法 count
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
//	bool operator== (Preson p)
//	{
//		if (this->m_age == p.m_age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	int ret = count(v1.begin(),v1.end(),1);
//	cout << ret << endl;
//
//	// 统计自定义对象
//	vector<Preson> vp;
//	Preson p1("df", 52);
//	Preson p2("sda", 62);
//	Preson p3("gg", 32);
//	Preson p4("sf", 52);
//	Preson p5("ggddf", 52);
//
//	vp.push_back(p1);
//	vp.push_back(p2);
//	vp.push_back(p3);
//	vp.push_back(p4);
//	vp.push_back(p5);
//
//	Preson p6("ggddf", 52);
//
//	int num = count(vp.begin(), vp.end(), p6);
//	cout << num << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-9-6
//// 完成