//#include<iostream>
//#include<deque>
//#include<vector>
//#include<algorithm>
//#include<ctime>
//using namespace std;
//
//// ��ί���ϵͳ
//// ȥ����߷� ȥ����ͷ� ȡƽ����  һ�� 5 �� ѡ��
//
//class Person
//{
//public:
//	Person(string name , int score)
//	{
//		this->m_name = name;
//		this->m_score = score;
//
//	}
//
//	string m_name;
//	int m_score;
//};
//
//void printperson(const vector<Person> v)
//{
//	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << (*it).m_name << " " << "������" << (*it).m_score << endl;
//	}
//}
//
//
//
//void createPerson(vector<Person> &v) //һ��Ҫ�����õķ�ʽ
//{
//	string nameseed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameseed[i];
//
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//
//	}
//
//
//}
//
//void setscore(vector<Person> &v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		// ����ί��ַ���deque������
//		deque<int> d;
//		for (int i = 0; i < 100; i++)
//		{
//			int score = rand() % 41 + 60; //60-100�������
//			d.push_back(score);
//		}
//		//���� ȥ�������С��
//		sort(d.begin(), d.end());
//		d.pop_back();
//		d.pop_front();
//
//		//ȡƽ����
//		int sum = 0;
//		for (deque<int> ::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += (*dit);
//		}
//		int avg = sum / d.size();
//
//		//��ƽ���ָ�ֵ��ѡ��
//		(*it).m_score = avg;
//
//	}
//
//}
//
//
//void test01() 
//{	// ���������
//	srand((unsigned int)time(NULL));
//
//	//1. ����5��ѡ�� 
//	vector<Person> v;
//	createPerson(v);
//	//����
//	//printperson(v);
//	
//	//2. ��5��ѡ�ִ��
//	setscore(v);
//	//����
//	//printperson(v);
//
//	//3. ��ʾƽ����
//	printperson(v);
//}
//
//
//
//int main()
//{
//	
//	test01();
//
//	system("pasue");
//	return 0;
//}
//
//// 2023-9-1
//// ���