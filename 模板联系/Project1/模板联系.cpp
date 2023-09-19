//# include <iostream>
//using namespace std;
//// 实现通用 对数组进行排序的函数
//// 规则 从大到小
//// 算法 选择
//// 测试 char 数组 、 int 数组
//
////排序算法
//
//// 交换模板
//template<class T>
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//// 排序模板
//template<class T>
//void mysort( T arr[], int len) //选择排序法
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
////打印数组模板
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
//	// 测试 char 数组
//	char charArr[] = "bsauiduifa";
//	int num = sizeof(charArr) / sizeof(charArr[1]);
//	mysort(charArr, num);
//	PrintArray(charArr, num);
//}
//
//void test02()
//{
//	//测试 int 数组
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
//// 完成