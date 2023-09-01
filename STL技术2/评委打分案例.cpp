//#include<iostream>
//#include<deque>
//#include<vector>
//#include<algorithm>
//#include<ctime>
//using namespace std;
//
//// 评委打分系统
//// 去掉最高分 去掉最低分 取平均分  一共 5 名 选手
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
//		cout << "姓名：" << (*it).m_name << " " << "分数：" << (*it).m_score << endl;
//	}
//}
//
//
//
//void createPerson(vector<Person> &v) //一定要用引用的方式
//{
//	string nameseed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
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
//		// 将评委打分放入deque容器中
//		deque<int> d;
//		for (int i = 0; i < 100; i++)
//		{
//			int score = rand() % 41 + 60; //60-100的随机数
//			d.push_back(score);
//		}
//		//排序 去除最大最小分
//		sort(d.begin(), d.end());
//		d.pop_back();
//		d.pop_front();
//
//		//取平均分
//		int sum = 0;
//		for (deque<int> ::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += (*dit);
//		}
//		int avg = sum / d.size();
//
//		//将平均分赋值给选手
//		(*it).m_score = avg;
//
//	}
//
//}
//
//
//void test01() 
//{	// 随机数种子
//	srand((unsigned int)time(NULL));
//
//	//1. 创建5名选手 
//	vector<Person> v;
//	createPerson(v);
//	//测试
//	//printperson(v);
//	
//	//2. 给5名选手打分
//	setscore(v);
//	//测试
//	//printperson(v);
//
//	//3. 显示平均分
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
//// 完成