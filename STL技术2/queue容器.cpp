//#include<iostream>
//using namespace std;
//#include<queue>
//// queue �Ƚ��ȳ�(FIFO) ����������  ͬ���������б�����Ϊ
//// queue �ĳ��ò���
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//
//
//void test01()
//{
//	queue<Person> q;
//	//
//	Person p1("ts", 15);
//	Person p2("dasd", 18);
//	Person p3("fff", 16);
//	Person p4("q", 55);
//	Person p5("gg", 105);
//
//	//����
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	q.push(p5);
//
//	// �ж�ֻҪ���в�Ϊ�գ��鿴��ͷ �鿴ͷβ ����
//
//	while (!q.empty())
//	{
//		// ��ͷ
//		cout << "��ͷ" << " " << "����" << q.front().m_name << "  " << "����" << q.front().m_age << endl;
//		// ��ͷ
//		cout << "��β" << " " << "����" << q.back().m_name << "  " << "����" << q.back().m_age << endl;
//		q.pop();
//	}
//	cout << "�Ӵ�С��" << q.size() << endl;
//
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
//// 2023-9-1
//// ���