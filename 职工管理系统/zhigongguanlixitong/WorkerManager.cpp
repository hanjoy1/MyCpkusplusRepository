# include "WorkerManager.h"

WorkerManager::WorkerManager()
{
	//�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //���ļ�
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		//��ʼ������
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	// �ļ����ڣ�����û�м�¼
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		// �ļ�������
		//cout << "�ļ�Ϊ�գ�" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ����� ��������
	int num = this->get_EmpNum();
	cout << "ְ��������" << num << endl;
	this->m_EmpNum = num;
	//���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//���ļ��е����� �浽������ȥ
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
	cout << "*****0.�˳�ϵͳ************" << endl;
	cout << "*****1.����ְ����Ϣ********" << endl;
	cout << "*****2.��ʾְ����Ϣ********" << endl;
	cout << "*****3.ɾ����ְְ��********" << endl;
	cout << "*****4.�޸�ְ����Ϣ********" << endl;
	cout << "*****5.����ְ����Ϣ********" << endl;
	cout << "*****6.���ձ������********" << endl;
	cout << "*****7.��������ĵ�********" << endl;
	cout << "***************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0); //�˳�����
}

void WorkerManager::Add_Emp()
{
	cout << "���������ְ��������" << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//���
		//�����¿ռ��С
		int newsize = this->m_EmpNum + addNum;
		//�����¿ռ�
		Worker** newSpace = new Worker* [newsize];
		//��ԭ����������¿ռ�
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		//�������������
		for (int i = 0; i < addNum; i++)
		{
			int id;//���
			string name; //����
			int dSelect; //����
			cout << "�������" << i + 1 << "����ְ����ţ�" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����ְ����������" << endl;
			cin >> name;
			cout << "�������" << i + 1 << "����ְ���ĸ�λ��" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "1.�ϰ�" << endl;
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
			//��������ְ��ָ�룬���浽����
			newSpace[this->m_EmpNum + i] = worker;

		}
		//�ͷ�ԭ�еĿռ�
		delete[] this->m_EmpArray;
		//�����¿ռ�
		this->m_EmpNum = newsize;
		this->m_EmpArray = newSpace;
		//��ӳɹ�

		this->m_FileIsEmpty = false;
		cout << "�ɹ����" << addNum << "����ְ��" << endl;
		//�������ݵ��ļ���
		this->Save();
	}
	else
	{
		cout << "��������" << endl;
	}
	// ��������� ���� ���ϼ�
	system("pause");
	system("cls");
}
void WorkerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out); //������ķ�ʽ���ļ�
	// ��ÿ���˵�����д��
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
	ifs.open(FILENAME, ios::in); //���ļ� ��
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
		if (did == 1) //��ְͨ��
		{
			worker = new Employee(id, name, did);
		}
		else if (did == 2) //����
		{
			worker = new Manager(id, name, did);
		}
		else // �ϰ�
		{
			worker = new Boss(id, name, did);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}

}
void WorkerManager::Show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ�� 
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ����޼�¼" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->showinfo();
		}
	}
	system("pause");
	system("cls");

}
//ɾ��ְ��
void WorkerManager::Del_Emp() 
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		//����ְ�����ɾ��
		cout << "��������Ҫɾ���ı��:" << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1)
		{
			//����ǰ��
			for (int i = index; i < this->m_EmpNum-1;i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			//����ͬ�����ļ���
			this->Save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ��" << endl;
		}
		//������� ����
		system("pause");
		system("cls");
	}
}
//�ж��Ƿ����
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
		cout << "�ļ������ڻ�Ϊ��" << endl;
	}
	else
	{
		cout << "�������޸ĵ�ְ����ţ�" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//���ұ��Ա��
			delete this->m_EmpArray[ret];
			int newid = 0;
			string newName = "";
			int dSelect = 0;
			cout << "���ҵ���" << id << "��ְ������������ְ���ţ�" << endl;
			cin >> newid;
			cout << "��������������" << endl;
			cin >> newName;
			cout << "��������ְ�ƣ�" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
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
			// �������� 
			this->m_EmpArray[ret] = worker;
			cout << "�޸ĳɹ�" << endl;
			//���浽�ļ���
			this->Save();
		}
		else
		{
			cout << "���޴���" << endl;
		}

	}
	system("pause");
	system("cls");

}

void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ�Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҵķ������߷�ʽ" << endl;
		cout << "1.����ְ���ı�Ų���" << endl;
		cout << "2.����ְ������������" << endl;
		int select = 0;
		cin >> select;
		if (select == 1)
		{
			//���ձ�Ų�
			int id;
			cout << "�������ţ�" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				// �ҵ�ְ��
				cout << "���ҳɹ�" << endl;
				this->m_EmpArray[ret]->showinfo();
			}
			else
			{
				cout << "���޴���" << endl;
			}
		}
		else if (select == 2)
		{
			//����������
			string name;
			cout << "��������ҵ�������" << endl;
			cin >> name;

			//�ж��Ƿ�鵽�ı�־
			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ��"
						<< this->m_EmpArray[i]->m_ID
						<< endl;
					flag = true;
					this->m_EmpArray[i]->showinfo();
				};
			}
			if (flag == false)
			{
				cout << "���޴���" << endl;
			}
		}
		else
		{
			cout << "�����ѡ������" << endl;
		}
	}
	//��������
	system("pause");
	system("cls");

}
void WorkerManager::sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ���Ϊ��" << endl;

		system("pause");
		system("cls");
	}

	else
	{
		cout << "����������ʽ" << endl;
		cout << "1.��ְ���Ž�������" << endl;
		cout << "2.��ְ���Ž��н���" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int minormax = i;  //�������ֵ �� ��Сֵ �±�
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if(select == 1) //����
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
			// �ж�һ��ʼ�϶�����Сֵ�������ֵ�ǲ��Ǽ������Сֵ�����ֵ
			if (i != minormax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minormax];
				this->m_EmpArray[minormax] = temp;
			}
		}
		cout << "����ɹ�" << endl;
		this->Save(); 
		this->Show_Emp();
	}
}
void WorkerManager::Clean_Flie()
{
	cout << "ȷ��Ҫ��գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;
	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//����ļ�
		ofstream ofs(FILENAME, ios::trunc); // ɾ���ļ������´���
		ofs.close();
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i <this->m_EmpNum;i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//ɾ������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpNum = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}

