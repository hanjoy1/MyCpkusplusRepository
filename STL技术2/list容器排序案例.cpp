//#include<iostream>
//#include<list>
//using namespace std;
//// list ���� �߼�������
//// ���˶��� ���� ���� 
//// ������������ ������ͬ���������
//
//class Person
//{
//public:
//	Person(string name,int age,int height)
//	{
//		this->m_name = name;
//		this->m_age = age;
//		this->m_height = height;
//	}
//
//	int m_age;
//	string m_name;
//	int m_height;
//};
//
//
//
//void printlist(const list<Person> l)
//{
//	for (list<Person>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout <<"������" << (*it).m_name << " " << "���䣺" << (*it).m_age << " " << "��ߣ�" << (*it).m_height<< endl;
//	}
//}
//
//bool mycompare(Person p1,Person p2)
//{
//	if (p1.m_age != p2.m_age)
//	{
//		return p1.m_age > p2.m_age;
//	}
//	else
//	{
//		return p1.m_height < p2.m_height;
//	}
//	
//}
//
//void test01()
//{
//	list<Person> l1;
//	Person p1("liu", 52, 155);
//	Person p2("sdfa", 22, 185);
//	Person p3("qe", 52, 115);
//	Person p4("ff", 32, 195);
//	Person p5("gg", 32, 165);
//	Person p6("qffq", 32, 155);
//
//	l1.push_back(p1);
//	l1.push_back(p2);
//	l1.push_back(p3);
//	l1.push_back(p4);
//	l1.push_back(p5);
//	l1.push_back(p6);
//
//	cout << "��ʼ����" << endl;
//	printlist(l1);
//
//	cout << "����������" << endl;
//	l1.sort(mycompare);
//	printlist(l1);
//}
//
//
//
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-9-1
//// ���