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

//��ʾ������Ϣ
void Boss::showinfo()
{
	cout << "ְ����ţ�" << this->m_ID
		<< "\tְ��������" << this->m_Name
		<< "\t���ű�ţ�" << this->getDeptName()
		<< "\t��λְ��" << "����˾��������"
		<< endl;
};
//��ø�λ����
string Boss::getDeptName()
{
	return string("�ܲ�");
}; 