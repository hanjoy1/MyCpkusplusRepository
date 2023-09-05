#include <iostream>
using namespace std;
#include <string>
#include "MyArray.hpp"
//数组类封装 案例


class Person
{
public:
	Person() {}; //要想有参数构造 必须先有默认构造 
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};



void printarray(MyArray <int> & arr)
{
	for (size_t i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printarray(MyArray <Person> & arr)
{
	for (size_t i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_name << " "<< "年龄："<< arr[i].m_age << endl;
	}
	cout << endl;
}


void test01()
{
	// 直接构造 和 析构
	MyArray <int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	printarray(arr1);

	// 深拷贝构造
	MyArray<int> arr2(arr1);
	//等号赋值拷贝
	MyArray <int> arr3(100);
	arr3 = arr1;
}


void test02()
{
	MyArray<Person> arr(10);
	Person p1("a", 10);
	Person p2("b", 11);
	Person p3("cd", 110);
	Person p4("ad", 102);
	Person p5("ad", 108);
	Person p6("ad", 102);
	Person p7("adf", 105);
	Person p8("ad", 10);
	Person p9("aaa", 10);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	printarray(arr);
}



int main()
{
	test02();
	system("pause");
	return 0;
}

// 2023-8-30
// 完成