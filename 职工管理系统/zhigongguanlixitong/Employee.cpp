#include "Employee.h"

// 
Employee::Employee(int id, string name, int did)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = did;



};
//显示个人信息
void Employee::showinfo()
{
	cout << "职工编号：" << this->m_ID
		<< "\t职工姓名：" << this->m_Name
		<< "\t部门编号：" << this->getDeptName()
		<<"\t岗位职责：" << "完成经理交给的任务"
		<< endl;
};
//获得岗位名称
string Employee::getDeptName() 
{
	return string("员工");

};