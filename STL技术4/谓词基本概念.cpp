//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//// ν�� �� ����ֵΪbool �ķº���
//// ν�� ���ݷº�����������ĸ��� ��Ϊ һԪν�� �� ��Ԫν��
//// һԪν��
//
//class Greaterfive // ν�� 
//{
//public:
//	bool const operator() (int v)
//	{
//		return v > 5;
//	}
//};
//
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	// ����һ����û�д���5����
//	//vector<int>::iterator it =  find_if(v.begin(), v.end(), Greaterfive()); // ������������
//	Greaterfive fg;  //ʵ����ν��
//	vector<int>::iterator it = find_if(v.begin(), v.end(), fg); // ������������
//	if (it == v.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << (*it) << endl;
//	}
//
//
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//
//}
//
//// 2023-9-4
//// ���