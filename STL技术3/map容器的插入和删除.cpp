//#include<iostream>
//#include<map>
//using namespace std;
//
//// map �����Ĳ����ɾ��
//
//void printmap(map<int,int> m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << (*it).first << " " << "value:" << (*it).second << endl;
//	}
//}
//
//
//void test01()
//{
//	// ����map����
//	map<int, int> m;
//	// ����1 ����
//	m.insert(pair<int, int>(1, 10)); //�������鸳ֵ
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	//����2 ����
//	m.insert(make_pair(4, 40));
//
//	//����3 ���Ƽ�
//	m.insert(map<int, int>::value_type(5, 50));
//
//	//����4 ��̫���� ���� ������������
//	m[6] = 60;
//
//	printmap(m);
//	//ɾ��1 map������ɾ��
//	m.erase(m.begin()); //������ɾ��
//
//	//ɾ��2
//	m.erase(3); //����key ɾ��
//	printmap(m);
//
//	//ɾ��3
//	m.erase(m.begin(), m.end());
//
//	//���
//	m.clear();
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//
//}
//
//// 2023-9-4
//// ���