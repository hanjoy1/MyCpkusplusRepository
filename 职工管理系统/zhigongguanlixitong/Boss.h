// 文件
#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

class Boss: public Worker
{
public:
	Boss(int id, string name, int did);
	~Boss();


	//显示个人信息
	virtual void showinfo();
	//获得岗位名称
	virtual string getDeptName();
private:

};

