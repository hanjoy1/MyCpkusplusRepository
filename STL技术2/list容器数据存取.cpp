//#include<iostream>
//#include<list>
//using namespace std;
//// list �������ݵĴ�ȡ ��֧�� at [] ������������ ֻ��++  -- ���� += -=
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
//	l1.push_back(50);
//
//	// ���Է���ͷβ ��������������
//	cout << "l1�ĵ�һ��Ԫ��Ϊ��" << l1.front() << endl;;
//	cout << "l1�����һ��Ԫ��Ϊ��" << l1.back() << endl;
//
//	// ��֤������������
//
//	list<int> ::iterator it = l1.begin();
//	it++; 
//	it--; //�Ƿ�֧��˫��
//	//it += 1; //�Ƿ�֧��������� �����˾�˵����֧��
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