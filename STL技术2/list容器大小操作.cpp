//#include<iostream>
//#include<list>
//using namespace std;
//// list ������С���� 
//
//void printlist(const list<int> l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	printlist(l1);
//
//	// �ж��Ƿ�Ϊ��
//	if (l1.empty())
//	{
//		cout << "l1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "��Ϊ��" << endl;
//		cout << "l1�ĸ�����" << l1.size() << endl;
//	}
//
//	//����ָ����С ������������ͬС��Ĳ���
//	l1.resize(10);
//	printlist(l1);
//
//	l1.resize(15, 2);
//	printlist(l1);
//
//	l1.resize(1);
//	printlist(l1);
//}
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