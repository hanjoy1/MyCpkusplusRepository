//#include<iostream>
//#include<map>
//#include<vector>
//#include<string>
//#include<ctime>
//using namespace std;
//// Ա�����鰸��
//// ����10��Ա�� ����vector
//// ����vector ȡ��ÿ��Ա�� �����������
//// ����� ��Ա�������Ϊkey Ա��Ϊvalue ����multimap
//// �ֲ�����ʾ Ա����Ϣ
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
//		cout << "������" << (*it).m_name << " " << "���ʣ�" << (*it).m_salary << endl;
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
//		worker.m_name = "Ա��";
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
//		// ������ɲ��ֱ��
//		int deptid = rand() % 3; //02
//		// ��Ա�����������
//		m.insert(make_pair(deptid, *it));
//	}
//
//
//}
//
//void showworker(multimap<int,Worker> m)
//{
//	// 0 1 2 �߻� ���� ����
//	cout << "�߻�����:" << endl;
//	int num = m.count(0);
//	int index = 0;
//	for (multimap<int, Worker> ::iterator pos = m.find(0); pos != m.end() && index < num ; pos++, index++)
//	{
//		cout << "������" << (*pos).second.m_name << "  " << "���ʣ�" << (*pos).second.m_salary << endl;
//	}
//
//	cout << "��������:" << endl;
//	num = m.count(1);
//	index = 0;
//	for (multimap<int, Worker> ::iterator pos = m.find(1); pos != m.end() && index < num; pos++, index++)
//	{
//		cout << "������" << (*pos).second.m_name << "  " << "���ʣ�" << (*pos).second.m_salary << endl;
//	}
//
//	cout << "��������:" << endl;
//	num = m.count(2);
//	index = 0;
//	for (multimap<int, Worker> ::iterator pos = m.find(2); pos != m.end() && index < num; pos++, index++)
//	{
//		cout << "������" << (*pos).second.m_name << "  " << "���ʣ�" << (*pos).second.m_salary << endl;
//	}
//}
//
//
//void test01()
//{
//	srand((unsigned int)time(NULL));
//	// 1. ����Ա��
//	vector<Worker> vworker;
//	creatwork(vworker);
//	//�׶��Բ���1
//	Printwork(vworker);
//	//2.Ա������
//	multimap <int, Worker> mworker;
//
//	setGroup(vworker,mworker);
//	//3.������ʾԱ��
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
//// ���