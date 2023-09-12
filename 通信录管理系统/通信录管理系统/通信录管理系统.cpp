#define _CRT_SECURE_NO_WARINGS 1
#define MAX 1000 

// 封装函数显示界面
// main函数调用封装好的函数
#include <iostream>
#include <string>
using namespace std;

//设计联系人结构体
struct Person
{
	//姓名
	string m_Name;
	//性别
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};
//通信录结构体
struct Addressbooks
{
	struct Person personArray[MAX]; //通信录中保存的联系人数组
	int m_size; //通信录中人员个数

};

void addPreson(Addressbooks* abs)
{
	//通信录满了
	if (abs->m_size == MAX)
	{
		cout << "通信录已满" << endl; 
		return;
	}
	else
	{
		//添加联系人
		// 
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;
		//性别
		cout << "请选择性别" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;
		int Sex = 0;
		while (true)
		{
			//输入正确才能继续
			cin >> Sex;
			if (Sex == 1 || Sex == 2)
			{
				abs->personArray[abs->m_size].m_Sex = Sex;
				break;
			}
			cout << "请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄" << endl;
		int Age = 0;
		cin >> Age;
		abs->personArray[abs->m_size].m_Age = Age;
		//电话
		cout << "请输入联系电话" << endl;
		string Phone;
		cin >> Phone;
		abs->personArray[abs->m_size].m_Phone = Phone;
		//住址
		cout << "请输入住址" << endl;
		string Addr;
		cin >> Addr;
		abs->personArray[abs->m_size].m_Addr = Addr;

		//更新通信录
		abs->m_size++;
		cout << "成功添加" << endl;

		system("pause");//按任意键继续
		system("cls");//清屏
	}
}

void showPerson(Addressbooks* abs)
{
	//判断有没有
	if (abs->m_size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		int i = 0;
		for (i = 0; i < abs->m_size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男":"女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr  << endl;
		}
	}
	system("pause");
	system("cls");
}

int isExist(Addressbooks* abs, string s)
{
	int i = -1;
	for (i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_Name == s)
		{
			return i;
		}		
	}
			return -1;
}
//删除联系人
void deletePerson(Addressbooks* abs,string s)
{
	/*
	cout << "请输入你要删除的联系人" << endl;
	string name;
	cin >> name;
	*/
	int ret = isExist(abs, s);
	if (ret != -1) //查到此人了
	{
		for (size_t i = ret ; i < abs->m_size ; i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "删除成功" << endl;
	}
}

//查找联系人
void FindPerson(Addressbooks* abs)
{
	cout << "请输入想要查找的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if ( ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}

	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks* abs)
{
	cout << "请输入您想要修改的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		//改名字
		string name;
		cout << "请重新输入姓名" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//改性别

		while (true)
		{
			cout << "请重新输入性别" << endl;
			int Sex;
			cin >> Sex;
			if (Sex == 1 || Sex == 2)
			{
				abs->personArray[ret].m_Sex= Sex;
				break;
			}
			cout << "输入有误" << endl;

		}
		
		//改年龄
		int Age = 0;
		cout << "请重新输入年龄" << endl;
		cin >> Age;
		abs->personArray[ret].m_Age = Age;

		//改电话
		string Phone;
		cout << "请重新输入电话" << endl;
		cin >> Phone;
		abs->personArray[ret].m_Phone = Phone;

		//改地址
		string Addr;
		cout << "请重新输入地址" << endl;
		cin >> Addr;
		abs->personArray[ret].m_Addr = Addr;
		
		cout << "修改成功" << endl;
	}
}

void Cleanperson(Addressbooks* abs)
{
	abs->m_size = 0; //将当前记录联系人的数量至0，逻辑上的清空
	cout << "通信录已清空" << endl;
	//按任意键继续
	system("pause");
	system("cls");

}
//菜单界面
void showMenu() 
{
	cout << "1.添加联系人" <<  endl;
	cout << "2.显示联系人" <<  endl;
	cout << "3.删除联系人" <<  endl;
	cout << "4.查找联系人" <<  endl;
	cout << "5.修改联系人" <<  endl;
	cout << "6.清空联系人" <<  endl;
	cout << "0.退出通信录" <<  endl;
}

int main() 
{

	//创建通信录结构体
	Addressbooks abs;
	abs.m_size = 0;
	int select = 0; //先定义输入变量

	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1: //添加联系人
			addPreson(&abs);//用地址传递才能修改实参
			break;
		case 2:	//显示联系人
			showPerson(&abs);
			break;
		case 3:	//删除联系人 
		{
			cout << "请输入想要删除联系人的姓名：" << endl;
			string s;
			cin >> s;
			if (isExist(&abs, s) == -1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
				deletePerson(&abs, s);
			}
			system("pause");
			system("cls");
		}
			break;
		case 4:	//查找联系人
			FindPerson(&abs);
			break;
		case 5:	//修改联系人
			modifyPerson(&abs);
			break;
		case 6:	//清空联系人
			Cleanperson(&abs);
			break;
		case 0:	//退出通信录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	//菜单的调用
	system("pause");
	return 0;
}