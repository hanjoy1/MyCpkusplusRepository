//#include<iostream>
//#include<map>
//#include<vector>
//#include<string>
//#include<ctime>
//using namespace std;
//// 员工分组案例
//// 创建10名员工 放入vector
//// 遍历vector 取出每个员工 进行随机分组
//// 分组后 将员工编号作为key 员工为value 放入multimap
//// 分部门显示 员工信息
//
//class Worker
//{
//public:
//
//
//	string m_name;
//	int m_salary;
//};
//
//void Printwork(vector<Worker> v)
//{
//	for (vector<Worker> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_name << " " << "工资：" << (*it).m_salary << endl;
//	}
//
//}
//
//void creatwork(vector<Worker> &v)
//{
//	string nameseed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_name = "员工";
//		worker.m_name = worker.m_name += nameseed[i];
//		worker.m_salary = rand() % 10000 + 10000; //10000-19999
//		v.push_back(worker);
//
//	}
//
//}
//
//void setGroup(vector<Worker> v,multimap<int,Worker> &m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		// 随机生成部分编号
//		int deptid = rand() % 3; //02
//		// 将员工插入分组中
//		m.insert(make_pair(deptid, *it));
//	}
//
//
//}
//
//void showworker(multimap<int,Worker> m)
//{
//	// 0 1 2 策划 美术 开发
//	cout << "策划部门:" << endl;
//	int num = m.count(0);
//	int index = 0;
//	for (multimap<int, Worker> ::iterator pos = m.find(0); pos != m.end() && index < num ; pos++, index++)
//	{
//		cout << "姓名：" << (*pos).second.m_name << "  " << "工资：" << (*pos).second.m_salary << endl;
//	}
//
//	cout << "美术部门:" << endl;
//	num = m.count(1);
//	index = 0;
//	for (multimap<int, Worker> ::iterator pos = m.find(1); pos != m.end() && index < num; pos++, index++)
//	{
//		cout << "姓名：" << (*pos).second.m_name << "  " << "工资：" << (*pos).second.m_salary << endl;
//	}
//
//	cout << "开发部门:" << endl;
//	num = m.count(2);
//	index = 0;
//	for (multimap<int, Worker> ::iterator pos = m.find(2); pos != m.end() && index < num; pos++, index++)
//	{
//		cout << "姓名：" << (*pos).second.m_name << "  " << "工资：" << (*pos).second.m_salary << endl;
//	}
//}
//
//
//void test01()
//{
//	srand((unsigned int)time(NULL));
//	// 1. 创建员工
//	vector<Worker> vworker;
//	creatwork(vworker);
//	//阶段性测试1
//	Printwork(vworker);
//	//2.员工分组
//	multimap <int, Worker> mworker;
//
//	setGroup(vworker,mworker);
//	//3.分组显示员工
//	showworker(mworker);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-9-4
//// 完成