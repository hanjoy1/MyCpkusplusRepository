#include "Boss.h"

Boss::Boss(int id, string name, int did)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = did;
};

Boss::~Boss()
{
};

//显示个人信息
void Boss::showinfo()
{
	cout << "职工编号：" << this->m_ID
		<< "\t职工姓名：" << this->m_Name
		<< "\t部门编号：" << this->getDeptName()
		<< "\t岗位职责：" << "管理公司所有事务"
		<< endl;
};
//获得岗位名称
string Boss::getDeptName()
{
	return string("总裁");
}; 