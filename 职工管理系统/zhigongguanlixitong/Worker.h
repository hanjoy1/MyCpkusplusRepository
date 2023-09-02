#pragma once;
#include <iostream>;
using namespace std;
# include <string>;

// 职工抽象
class Worker
{
public:

	//显示个人信息
	virtual void showinfo() = 0;
	//获得岗位名称
	virtual string getDeptName() = 0;


	//职工编号
	int m_ID;
	//职工姓名
	string m_Name;
	//部门编号
	int m_DeptID;

};