//#include<iostream>
//#include<map>
//using namespace std;
//
//// map���Һ�ͳ��
//
//void printmap(map<int,int> m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << (*it).first << " " << "value:" << (*it).second << endl;
//	}
//}
//
//void test01()
//{
//	//����map����
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10)); //�������鸳ֵ
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	//���� ���� ������
//	map<int, int>::iterator pos = m.find(4); //�ҵ���key ֵ
//	if (pos != m.end())
//	{
//		cout << "key:" << (*pos).first << "value:" << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "û��" << endl;
//	}
//	// ͳ��
//	int num = m.count(2); // ͳ�Ƶ�Ҳ�� key �� ����  ����map���Ծ���  0 / 1
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//// 2023-9-4
//// ���