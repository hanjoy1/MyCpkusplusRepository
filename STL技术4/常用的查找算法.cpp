//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//// find 查找 找到： 返回迭代器位置 ， 没找到： 返回end();
//
//class Preson
//{
//public:
//	Preson(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//
//	bool operator== (Preson p)
//	{
//		if (p.m_name == this->m_name && p.m_age == this->m_age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	// 查一下有没有5
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了:" << (*it) << endl;
//	}
//
//	//自定义类型查找
//	vector<Preson> p;
//	Preson p1("dasd", 20);
//	Preson p2("sadsd", 210);
//	Preson p3("dfafd", 202);
//	Preson p4("gggd", 30);
//	Preson p5("aaasd", 520);
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	p.push_back(p4);
//	p.push_back(p5);
//
//
//	// 自定义类型 需要重载 ==
//	vector<Preson>::iterator it2 = find(p.begin(), p.end(), p2); 
//	if (it2 == p.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了:" << (*it2).m_name<< " "<< (*it2).m_age << endl;
//	}
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