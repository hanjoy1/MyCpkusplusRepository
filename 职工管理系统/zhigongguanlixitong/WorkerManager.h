# pragma once //防止头文件重复
# include <iostream> //包含输入输出流头文件
using namespace std; //使用标准命名空间
# include "Worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"
#include<fstream> 
#define FILENAME "empFile.txt"
class WorkerManager
{
public:
	WorkerManager();
	// 展示菜单
	void Show_Menu();
	// 退出系统
	void ExitSystem();
	// 添加职工
	void Add_Emp();
	//保存文件
	void Save();
	//统计人数
	int get_EmpNum();
	void init_Emp();
	void Show_Emp();
	//删除职工
	void Del_Emp();
	//修改职工信息
	void Mod_Emp();
	void Find_Emp();
	void sort_Emp();
	void Clean_Flie();
	//判断是否存在
	int IsExist(int id);

	//判断文件是否为空
	bool m_FileIsEmpty;

	//显示职工
	
	// 记录职工人数
	int m_EmpNum;
	// 职工数组指针
	Worker**  m_EmpArray;



	~WorkerManager();

private:

};

