// �ļ�
#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

class Boss: public Worker
{
public:
	Boss(int id, string name, int did);
	~Boss();


	//��ʾ������Ϣ
	virtual void showinfo();
	//��ø�λ����
	virtual string getDeptName();
private:

};

