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

//��ʾ������Ϣ
void Manager::showinfo()
{
	cout << "ְ����ţ�" << this->m_ID
		<< "\tְ��������" << this->m_Name
		<< "\t���ű�ţ�" << this->getDeptName()
		<< "\t��λְ��" << "����ϰ彻�������񣬲����·�����ͨԱ������"
		<< endl;
};
//��ø�λ����
string Manager:: getDeptName()
{
	return string("����");
};