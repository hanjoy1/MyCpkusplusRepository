#pragma once;
#include <iostream>;
using namespace std;
# include <string>;

// ְ������
class Worker
{
public:

	//��ʾ������Ϣ
	virtual void showinfo() = 0;
	//��ø�λ����
	virtual string getDeptName() = 0;


	//ְ�����
	int m_ID;
	//ְ������
	string m_Name;
	//���ű��
	int m_DeptID;

};