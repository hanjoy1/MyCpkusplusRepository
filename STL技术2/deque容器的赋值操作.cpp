//#include <iostream>
//using namespace std;
//#include <deque>
//// deque �����ĸ�ֵ���� ��vector ���һ��
//
//void printdque(const deque<int> d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end();it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	//
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printdque(d1);
//
//	//�ȺŸ�ֵ
//	deque<int> d2;
//	d2 = d1;
//	printdque(d2);
//
//	//assign ����
//	deque<int> d3;
//	d3.assign(10, 0);
//	printdque(d3);
//
//	//assign����
//	deque<int> d4;
//	d4.assign(d1.begin(), d1.end());
//	printdque(d4);
//
//}
//
//
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}
//
//// 2023-8-31
//// ���