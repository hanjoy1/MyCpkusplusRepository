// ��ͨԱ���ļ�
#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

class Employee :public Worker
{
public :


	Employee( int id ,string name, int did);

	~Employee();

	//��ʾ������Ϣ
	virtual void showinfo();
	//��ø�λ����
	virtual string getDeptName();

};