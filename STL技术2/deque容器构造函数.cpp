//#include <iostream>
//using namespace std;
//#include<deque>
//// deque�������캯��
//// deque �� vector ������ ֻ����˫���
//void printdeque(const deque<int> &d)
//{
//	//���� ֻ��״̬�Ĵ����� ֻ��״̬�ĵ�����
//	for (deque<int>:: const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	// ��һ��
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printdeque(d1);
//
//	//�ڶ���
//	deque<int>d2(d1.begin(), d1.end());
//	printdeque(d2);
//
//	//������
//	deque<int>d3(10, 100);
//	printdeque(d3);
//
//	//������
//	deque<int>d4(d3);
//	printdeque(d4);
//}
//
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
//// 2023-8-31
//// ���