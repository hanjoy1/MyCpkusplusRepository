//#include <iostream>
//using namespace std;
//#include <vector>
//// vector �����Ĳ�����ɾ��
///*
//push_back(eld) //β������
//pop_back() //β��ɾ��
//insert(const_iterator pos, ele);
//insert(const_iterator pos, int count, ele);
//erase(const_iterator pos);
//erase(const_iterator start, const_iterator end);
//clear();
//*/
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
//	//βɾ
//	v1.pop_back();
//	printvector(v1);
//
//	// ���� ���õ�����ָ��λ��
//	v1.insert(v1.begin(), 100); 
//	printvector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printvector(v1);
//
//	//ɾ�� ���õ�����ָ��ɾ��λ��
//	v1.erase(v1.begin());
//	printvector(v1);
//
//	//ɾ�� ���õ�����ָ��ɾ������  
//	v1.erase(v1.begin(), v1.end());  //����д ���� �����
//	printvector(v1);
//
//	//���
//	v1.clear();
//	printvector(v1);
//}
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
//// 2023-8-30
//// ���
