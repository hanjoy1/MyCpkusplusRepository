//#include <iostream>
//using namespace std;
//// ��ģ����̳�
//// ������̳еĸ�����һ����ģ��ʱ������������ʱ��Ҫָ�������е�T����
//// �����ָ�����������޷�����������ڴ�
//// �����Ҫ���ָ�������е�T���ͣ�����Ҳ��Ҫ��Ϊ��ģ��
//
//template<class T>
//class Base
//{
//	T m;
//};
//class Son : public Base<int> //�����в����б� ��Ϊ���಻��ģ�� �������ڴ����
//{
//
//};
//
//// �����Ҫ���ָ�������е�T���ͣ�����Ҳ��Ҫ��Ϊ��ģ��
//template <class T1 ,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1�������ǣ�" << typeid(T1).name() << endl;
//		cout << "T2�������ǣ�" << typeid(T2).name() << endl;
//
//	}
//	T1 obj;
//};
//
//void test01()
//{
//	Son s1;
//	Son2<int, int> s2; // ��һ������ T1 ����������� �� �ڶ������� T2 �Ǹ��������
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
//// 2023-8-29
//// ���
