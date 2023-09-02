// j经理文件
#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

class Manager : public Worker
{
public:
	Manager(int id, string name, int did);
	~Manager();


	//显示个人信息
	virtual void showinfo() ;
	//获得岗位名称
	virtual string getDeptName() ;
private:

};

