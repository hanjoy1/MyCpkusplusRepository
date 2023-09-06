//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//// 按条件来统计
//
//class Preson
//{
//public:
//	Preson(string name,int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int  m_age;
//
//};
//
//class myif
//{
//public:
//	bool operator() (int val)
//	{
//		return val > 5;
//	}
//
//};
//
//class myif2
//{
//public:
//	bool operator() (Preson p)
//	{
//		return p.m_age > 20;
//	}
//
//};
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	
//	int ret = count_if(v.begin(), v.end(), myif());
//	cout << "大于五的数有：" << ret<<"个" << endl;
//
//	vector<Preson> vp;
//	Preson p1("sad", 12);
//	Preson p2("Tom", 25);
//	Preson p3("Pom", 35);
//	Preson p4("John", 85);
//	Preson p5("Laplace", 45);
//	vp.push_back(p1);
//	vp.push_back(p2);
//	vp.push_back(p3);
//	vp.push_back(p4);
//	vp.push_back(p5);
//
//	int num = count_if(vp.begin(), vp.end(), myif2());
//	cout << "大于二十的人数有：" << num << endl;
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
//// 2023-9-6
//// 完成