//#include <iostream>
//using namespace std;
//#include <vector>
//// vector ���� ������������
//
//
//
//void printvector(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);
//
//	vector<int> v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printvector(v2);
//
//	// ������������
//	v1.swap(v2);
//	cout << "����" << endl;
//	printvector(v1);
//	printvector(v2);
//
//}
//
//// ����swap()
//void test02()
//{
//	// ������10���Ԫ�ص�����v1
//	vector<int> v1;
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//	}
//
//	cout << "v1�������ǣ�" << v1.capacity() << endl;   
//	cout << "v1�Ĵ�С�ǣ�" << v1.size() << endl;
//
//	v1.resize(3);
//	cout << "����ָ����С��" << endl;
//	cout << "v1�������ǣ�" << v1.capacity() << endl;    //����ǳ����˷ѿռ�
//	cout << "v1�Ĵ�С�ǣ�" << v1.size() << endl;
//
//	//����swap�����ڴ�
//	vector<int>(v1).swap(v1); //��������ִ�к���Զ�����
//	cout << "������" << endl;
//	cout << "v1�������ǣ�" << v1.capacity() << endl;    //����ǳ����˷ѿռ�
//	cout << "v1�Ĵ�С�ǣ�" << v1.size() << endl;
//}
//
//
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
//
//// 20238-30
//// ���