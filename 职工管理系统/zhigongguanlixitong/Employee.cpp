#include "Employee.h"

// 
Employee::Employee(int id, string name, int did)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = did;



};
//��ʾ������Ϣ
void Employee::showinfo()
{
	cout << "ְ����ţ�" << this->m_ID
		<< "\tְ��������" << this->m_Name
		<< "\t���ű�ţ�" << this->getDeptName()
		<<"\t��λְ��" << "��ɾ�����������"
		<< endl;
};
//��ø�λ����
string Employee::getDeptName() 
{
	return string("Ա��");

};