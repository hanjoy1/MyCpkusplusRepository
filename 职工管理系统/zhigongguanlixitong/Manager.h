// j�����ļ�
#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

class Manager : public Worker
{
public:
	Manager(int id, string name, int did);
	~Manager();


	//��ʾ������Ϣ
	virtual void showinfo() ;
	//��ø�λ����
	virtual string getDeptName() ;
private:

};

