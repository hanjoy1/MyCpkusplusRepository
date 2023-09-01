//#include<iostream>
//using namespace std;
//#include<queue>
//// queue 先进先出(FIFO) 的数据类型  同样不允许有遍历行为
//// queue 的常用操作
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
//	//入列
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	q.push(p5);
//
//	// 判断只要队列不为空，查看对头 查看头尾 出队
//
//	while (!q.empty())
//	{
//		// 对头
//		cout << "队头" << " " << "姓名" << q.front().m_name << "  " << "年龄" << q.front().m_age << endl;
//		// 对头
//		cout << "队尾" << " " << "姓名" << q.back().m_name << "  " << "年龄" << q.back().m_age << endl;
//		q.pop();
//	}
//	cout << "队大小：" << q.size() << endl;
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
//// 完成