# include "WorkerManager.h"

WorkerManager::WorkerManager()
{
	//文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //读文件
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		//初始化属性
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	// 文件存在，但是没有记录
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		// 文件读完了
		//cout << "文件为空！" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件存在 且有数据
	int num = this->get_EmpNum();
	cout << "职工人数：" << num << endl;
	this->m_EmpNum = num;
	//开辟空间
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//将文件中的数据 存到数组中去
	this->init_Emp();




}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

void  WorkerManager::Show_Menu()
{
	cout << "***************************" << endl;
	cout << "*********WELCOME***********" << endl;
	cout << "*****0.退出系统************" << endl;
	cout << "*****1.增加职工信息********" << endl;
	cout << "*****2.显示职工信息********" << endl;
	cout << "*****3.删除离职职工********" << endl;
	cout << "*****4.修改职工信息********" << endl;
	cout << "*****5.查找职工信息********" << endl;
	cout << "*****6.按照编号排序********" << endl;
	cout << "*****7.清空所有文档********" << endl;
	cout << "***************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0); //退出程序
}

void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工的数量" << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//添加
		//计算新空间大小
		int newsize = this->m_EmpNum + addNum;
		//开辟新空间
		Worker** newSpace = new Worker* [newsize];
		//将原来数组放入新空间
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		//批量添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;//编号
			string name; //姓名
			int dSelect; //部门
			cout << "请输入第" << i + 1 << "个新职工编号：" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工的姓名：" << endl;
			cin >> name;
			cout << "请输入第" << i + 1 << "个新职工的岗位：" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "1.老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id,name,1);
				break;
			case 2:
				worker = new Manager(id, name, 1);
				break;
			case 3:
				worker = new Boss(id, name, 1);
				break;
			default:
				break;
			}
			//将创建的职工指针，保存到数组
			newSpace[this->m_EmpNum + i] = worker;

		}
		//释放原有的空间
		delete[] this->m_EmpArray;
		//更新新空间
		this->m_EmpNum = newsize;
		this->m_EmpArray = newSpace;
		//添加成功

		this->m_FileIsEmpty = false;
		cout << "成功添加" << addNum << "名新职工" << endl;
		//保存数据到文件中
		this->Save();
	}
	else
	{
		cout << "数据有误" << endl;
	}
	// 按任意键后 清屏 后到上级
	system("pause");
	system("cls");
}
void WorkerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out); //用输出的方式打开文件
	// 将每个人的数据写入
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_ID << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptID << endl;
	}
	ofs.close();


}
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //打开文件 读
	int id;
	string name;
	int did;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;
	}
	return num;
}

void WorkerManager::init_Emp() 
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int did;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		Worker* worker = NULL;
		if (did == 1) //普通职工
		{
			worker = new Employee(id, name, did);
		}
		else if (did == 2) //经理
		{
			worker = new Manager(id, name, did);
		}
		else // 老板
		{
			worker = new Boss(id, name, did);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}

}
void WorkerManager::Show_Emp()
{
	//判断文件是否为空 
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或则无记录" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//利用多态调用程序接口
			this->m_EmpArray[i]->showinfo();
		}
	}
	system("pause");
	system("cls");

}
//删除职工
void WorkerManager::Del_Emp() 
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		//按照职工编号删除
		cout << "请输入想要删除的编号:" << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1)
		{
			//数据前移
			for (int i = index; i < this->m_EmpNum-1;i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			//数据同步到文件中
			this->Save();
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "删除失败" << endl;
		}
		//按任意键 清屏
		system("pause");
		system("cls");
	}
}
//判断是否存在
int WorkerManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_ID = id)
		{
			index = i;
			break;
		}
		return index;
	}
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或为空" << endl;
	}
	else
	{
		cout << "请输入修改的职工编号：" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//查找编号员工
			delete this->m_EmpArray[ret];
			int newid = 0;
			string newName = "";
			int dSelect = 0;
			cout << "查找到：" << id << "号职工，请输入新职工号：" << endl;
			cin >> newid;
			cout << "请输入新姓名：" << endl;
			cin >> newName;
			cout << "请输入新职称：" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newid, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newid, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newid, newName, dSelect);
				break;
			default:
				break;
			}
			// 更新数据 
			this->m_EmpArray[ret] = worker;
			cout << "修改成功" << endl;
			//保存到文件中
			this->Save();
		}
		else
		{
			cout << "查无此人" << endl;
		}

	}
	system("pause");
	system("cls");

}

void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或为空" << endl;
	}
	else
	{
		cout << "请输出查找的方法或者方式" << endl;
		cout << "1.按照职工的编号查找" << endl;
		cout << "2.按照职工的姓名查找" << endl;
		int select = 0;
		cin >> select;
		if (select == 1)
		{
			//按照编号查
			int id;
			cout << "请输入编号：" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				// 找到职工
				cout << "查找成功" << endl;
				this->m_EmpArray[ret]->showinfo();
			}
			else
			{
				cout << "查无此人" << endl;
			}
		}
		else if (select == 2)
		{
			//按照姓名查
			string name;
			cout << "请输入查找的姓名：" << endl;
			cin >> name;

			//判断是否查到的标志
			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，职工编号为："
						<< this->m_EmpArray[i]->m_ID
						<< endl;
					flag = true;
					this->m_EmpArray[i]->showinfo();
				};
			}
			if (flag == false)
			{
				cout << "查无此人" << endl;
			}
		}
		else
		{
			cout << "输入的选项有误" << endl;
		}
	}
	//清屏操作
	system("pause");
	system("cls");

}
void WorkerManager::sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者为空" << endl;

		system("pause");
		system("cls");
	}

	else
	{
		cout << "请输入排序方式" << endl;
		cout << "1.按职工号进行升序" << endl;
		cout << "2.按职工号进行降序" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int minormax = i;  //声明最大值 或 最小值 下标
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if(select == 1) //升序
					if (this->m_EmpArray[minormax]->m_ID > this->m_EmpArray[j]->m_ID)
					{
						minormax = j;
					}
					else
					{
						if (this->m_EmpArray[minormax]->m_ID < this->m_EmpArray[j]->m_ID)
						{
							minormax = j;
						}
					}
			}
			// 判断一开始认定的最小值或者最大值是不是计算的最小值或最大值
			if (i != minormax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minormax];
				this->m_EmpArray[minormax] = temp;
			}
		}
		cout << "排序成功" << endl;
		this->Save(); 
		this->Show_Emp();
	}
}
void WorkerManager::Clean_Flie()
{
	cout << "确定要清空？" << endl;
	cout << "1.确定" << endl;
	cout << "2.返回" << endl;
	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//清空文件
		ofstream ofs(FILENAME, ios::trunc); // 删除文件后重新创建
		ofs.close();
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i <this->m_EmpNum;i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//删除堆区指针
			delete[] this->m_EmpArray;
			this->m_EmpNum = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功" << endl;
	}
	system("pause");
	system("cls");
}

