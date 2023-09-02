#include <iostream>
#include "WorkerManager.h"
using namespace std;

#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

int main()
{
	//实例对象
	WorkerManager wm;
	int choice = 0; //存储用户选项

	while (true)
	{
		//调用菜单
		wm.Show_Menu();
		cout << "请输出您的选择" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: // 退出系统
			wm.ExitSystem();
			break;
		case 1: //添加员工
			wm.Add_Emp();
			break;
		case 2: //显示员工
			wm.Show_Emp();
			break;
		case 3: //删除员工
			wm.Del_Emp();
			break;
		case 4: //修改员工
			wm.Mod_Emp();
			break; 
		case 5: //查找员工
			wm.Find_Emp();
			break;
		case 6: //排序员工
			wm.sort_Emp();
			break;
		case 7: //清空文件
			
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}




// 名称： 职工管理系统-基于多态
// 时间：2023-8-39
// 制作人：羊男
// 用途： C++联系项目
// 状态：完成