//#include <iostream>
//using namespace std;
//#include <vector>
//// vector�ĸ�ֵ
//void printvector(vector<int> v)
//{
//	for (vector<int>:: iterator it = v.begin(); it != v.end();  it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	vector<int> v1;
//	for ( int i = 0; i < 10;  i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);
//
//	//��ֵ
//	vector<int> v2 = v1;
//	printvector(v2);
//
//	//assign ��ֵ
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	printvector(v3);
//
//	//n��elem ���̸�ֵ
//	vector<int> v4;
//	v4.assign(10, 100);
//	printvector(v3);
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