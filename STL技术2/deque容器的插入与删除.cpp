//#include <iostream>
//#include <deque>
//using namespace std;
//// deque�Ĳ�����ɾ�� ��vector��� ����ͷ��
//
//void printdeque(const deque<int> d)
//{
//	for (deque<int> ::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	// ��������
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i); // β��
//		d1.push_front(i); // ͷ��
//	}
//	printdeque(d1);
//
//	// ɾ������
//	for (int i = 0; i < 10; i++)
//	{
//		d1.pop_back(); //βɾ
//	}
//	d1.pop_front(); //ͷɾ
//	printdeque(d1);
//}
//
//void test02()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	printdeque(d1);
//
//	// insert ����
//	d1.insert(d1.begin(), 1000);
//	printdeque(d1);
//
//	// insert ���� 2
//	d1.insert(d1.begin(),2,10000);
//	printdeque(d1);
//
//	// insert ���� �������
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//
//	//ɾ��
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//
//	//ɾ�� ����
//	d1.erase(d1.begin(), d1.end());  //����д���������
//
//	//���
//	d1.clear();
//
//}
//
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
//
//// 2023-8-31
//// ���