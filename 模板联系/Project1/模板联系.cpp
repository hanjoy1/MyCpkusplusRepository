//# include <iostream>
//using namespace std;
//// ʵ��ͨ�� �������������ĺ���
//// ���� �Ӵ�С
//// �㷨 ѡ��
//// ���� char ���� �� int ����
//
////�����㷨
//
//// ����ģ��
//template<class T>
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//// ����ģ��
//template<class T>
//void mysort( T arr[], int len) //ѡ������
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i; 
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			myswap(arr[max], arr[i]);
//		}
//	}
//}
//
////��ӡ����ģ��
//template <class T>
//void PrintArray(T arr[], int len)
//{
//	for (size_t i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//
//
//
//void test01()
//{
//	// ���� char ����
//	char charArr[] = "bsauiduifa";
//	int num = sizeof(charArr) / sizeof(charArr[1]);
//	mysort(charArr, num);
//	PrintArray(charArr, num);
//}
//
//void test02()
//{
//	//���� int ����
//	int intarr[] = { 1,5,34,4,48,48,48,5,5 };
//	int num = sizeof(intarr) / sizeof(intarr[1]);
//	mysort(intarr, num);
//	PrintArray(intarr, num);
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	system("cls");
//	return  0;
//}
//
//
//
//// 23-8-29
//// ���