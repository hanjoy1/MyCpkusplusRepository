//#include <iostream>
//#include <set>
//using namespace std;
// // set���� ��С�ͽ���
//void printset(set<int> s)
//{
//	for (set<int> ::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//
//	set<int> s1;
//	// �������� ֻ��insert��ʽ  ����pushback
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	//��ӡ����
//	printset(s1);
//
//	//�ж��Ƿ�Ϊ��
//	if (s1.empty())
//	{
//		cout << "s1Ϊ��" << endl;
//	}
//	else 
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�С��" <<s1.size()<< endl;
//	}
//
//	set<int> s2;
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//	s2.insert(500);
//
//	cout << "����ǰ��" << endl;
//	printset(s1);
//	printset(s2);
//
//	s1.swap(s2);
//	cout << "������" << endl;
//	printset(s1);
//	printset(s2);
//
//}
//
//
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