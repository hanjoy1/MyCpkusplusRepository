//#include <iostream>
//using namespace std;
//#include <vector>
////vector�����������ʹ�С
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
//	if (v1.empty()) //Ϊ�� ����Ϊ��
//	{
//
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ��"<<v1.capacity() << endl; //�����ᶯ̬��չ �� ɾ��ԭ���ڴ� ���ٸ�����ڴ�
//		cout << "v1�Ĵ�СΪ��"<< v1.size() << endl;
//	}
//
//	//����ָ����С
//	v1.resize(15);
//	printvector(v1); //�������ָ���Ĺ��� Ĭ����0��� Ҳ����ָ�����ֵ 
//	v1.resize(15, 5);
//	printvector(v1);
//	v1.resize(5); //���ָ������ �����Ĳ��ֻᱻɾ��
//	printvector(v1);
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-8-30
//// ���