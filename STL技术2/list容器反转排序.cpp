//#include<iostream>
//#include<list>
//#include<algorithm>
//using namespace std;
//// list �����ķ�ת������  ��֧�� �㷨�е����� �Դ��������� 
//// ���в�֧��������ʵĵ�������֧���㷨algorithm->sort()
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
//bool mycompare(int v1 ,int v2)
//{
//	//����
//	return v1 > v2;
//}
//
//void test01()
//{
//	list<int> l1;
//	l1.push_back(20);
//	l1.push_back(50);
//	l1.push_back(60);
//	l1.push_back(50);
//	l1.push_back(10);
//
//	printlist(l1);
//
//	// ��ת
//	l1.reverse();
//	cout << "��תһ��" << endl;
//	printlist(l1);
//
//	// ����
//	l1.sort();
//	cout << "����һ��" << endl;
//	printlist(l1);
//
//	// ���� �Զ���
//	l1.sort(mycompare);
//	cout << "�Զ�������һ��" << endl;
//	printlist(l1);
//
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