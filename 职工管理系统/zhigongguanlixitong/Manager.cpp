#include "Manager.h"

Manager::Manager(int id, string name, int did)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = did;


};

Manager::~Manager()
{
};

//显示个人信息
void Manager::showinfo()
{
	cout << "职工编号：" << this->m_ID
		<< "\t职工姓名：" << this->m_Name
		<< "\t部门编号：" << this->getDeptName()
		<< "\t岗位职责：" << "完成老板交给的任务，并且下发给普通员工任务"
		<< endl;
};
//获得岗位名称
string Manager:: getDeptName()
{
	return string("经理");
};