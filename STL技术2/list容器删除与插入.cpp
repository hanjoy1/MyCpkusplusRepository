//#include<iostream>
//#include<list>
//using namespace std;
//// list ���� �����ɾ�� �ͱ��������ͬС�� ���� remove()
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
//
//	// β��
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	l1.push_back(50);
//	printlist(l1);
//
//	// ͷ��
//	l1.push_front(10);
//	l1.push_front(20);
//	l1.push_front(30);
//	l1.push_front(40);
//	l1.push_front(50);
//	printlist(l1);
//
//	// βɾ
//	l1.pop_back();
//	printlist(l1);
//
//	//ͷɾ
//	l1.pop_front();
//	printlist(l1);
//
//	//insert ����
//	l1.insert(l1.begin(), 1000);
//	printlist(l1);
//
//	list<int>::iterator it = l1.begin();
//	it++;
//	l1.insert(it, 5005);
//	printlist(l1);
//
//	//ɾ��
//	it = l1.begin();
//	l1.erase(it);
//
//	//**�Ƴ�**
//	l1.remove(5005); //ɾ�� ֵ ����һ���Ķ�ɾ
//	printlist(l1);
//
//	//����
//	l1.clear();
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