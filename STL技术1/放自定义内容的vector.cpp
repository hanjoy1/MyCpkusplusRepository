//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age);
//
//	~Person();
//
//	int m_age;
//	string m_name;
//};
//
//Person::Person(string name ,int age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
//Person::~Person()
//{
//}
//
//
//void test01()
//{
//	vector<Person> v;
//	Person p1("aaa",10);
//	Person p2("aaaa", 10);
//	Person p3("aca", 10);
//	Person p4("asa", 10);
//	Person p5("ad", 10);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<Person>::iterator it = v.begin() ; it != v.end() ; it++)
//	{
//		cout << "姓名：" << (*it).m_name << "年龄：" << (*it).m_age << endl;
//	}
//}
//
//
//void test02()
//{
//	vector<Person*> v;
//	Person p1("aaa", 10);
//	Person p2("aaaa", 10);
//	Person p3("aca", 10);
//	Person p4("asa", 10);
//	Person p5("ad", 10);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << (*it)->m_name << "年龄：" << (*it)->m_age << endl;
//	}
//}
//
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}
//
//// 2023-8-30
//// 完成