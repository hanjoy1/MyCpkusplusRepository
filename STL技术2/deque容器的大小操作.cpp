//#include <iostream>
//#include <deque>
//using namespace std;
//// deque���� �Ĵ�С���� ��vector ����һ��
//// deque���� ��û�����������
//
//void printdeque(const deque<int> d)
//{
//	for (deque<int> :: const_iterator  it = d.begin();it != d.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printdeque(d1);
//
//	if (d1.empty()) // Ϊ�շ�����
//	{
//		cout << "����Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "������Ϊ��" << endl;
//		cout << "������СΪ��" << d1.size() << endl;
//	}
//
//	d1.resize(15);
//	cout << "����ָ����СΪ15�� ��" << "������СΪ��" << d1.size() << endl;
//	d1.resize(15,1);
//	printdeque(d1);
//	d1.resize(5);
//	cout << "����ָ����СΪ5�� ��" << "������СΪ��" << d1.size() << endl;
// 
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return  0;
//}
//
//// 2023-8-31
//// ���