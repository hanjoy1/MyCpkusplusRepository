//#include <iostream>
//using namespace std;
//// string 的赋值操作
///*
//string& operatoe = (const char * s);
//string& operator = (const string &s);
//string& operator = (cahr c);
//string& assign(const char *s);
//string& assign(const char *s,int n);
//string& assign(const string &s);
//string& assign(int n, char c);
//*/
//
//
//void test01()
//{
//
//	//第一种
//	string str1;
//	str1 = "hello world";
//	cout << "str1=" << str1 << endl;
//	//第二种
//	string str2;
//	str2 = str1;
//	cout << "str2=" << str2 << endl;
//	//第三种
//	string str3;
//	str3 = 'a';
//	cout << "str3=" << str3 << endl;
//	//第四种
//	string str4;
//	str4.assign("hello world");
//	cout << "str4=" << str4 << endl;
//	//第五种
//	string str5;
//	str5.assign("hello world",5);
//	cout << "str5=" << str5 << endl;
//	//第六种
//	string str6;
//	str6.assign(str5);
//	cout << "str6=" << str6 << endl;
//	//第七种
//	string str7;
//	str7.assign(10,'w');
//	cout << "str7=" << str7 << endl;
//
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
//// 2023-8-30
//// 完成
//// 一般用等号就够了 但是看到assgin()函数要知道什么意思