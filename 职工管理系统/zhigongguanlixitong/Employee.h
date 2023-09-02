// 普通员工文件
#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

class Employee :public Worker
{
public :


	Employee( int id ,string name, int did);

	~Employee();

	//显示个人信息
	virtual void showinfo();
	//获得岗位名称
	virtual string getDeptName();

};