#include <iostream>
#include "WorkerManager.h"
using namespace std;

#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

int main()
{
	//ʵ������
	WorkerManager wm;
	int choice = 0; //�洢�û�ѡ��

	while (true)
	{
		//���ò˵�
		wm.Show_Menu();
		cout << "���������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: // �˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1: //���Ա��
			wm.Add_Emp();
			break;
		case 2: //��ʾԱ��
			wm.Show_Emp();
			break;
		case 3: //ɾ��Ա��
			wm.Del_Emp();
			break;
		case 4: //�޸�Ա��
			wm.Mod_Emp();
			break; 
		case 5: //����Ա��
			wm.Find_Emp();
			break;
		case 6: //����Ա��
			wm.sort_Emp();
			break;
		case 7: //����ļ�
			
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}




// ���ƣ� ְ������ϵͳ-���ڶ�̬
// ʱ�䣺2023-8-39
// �����ˣ�����
// ��;�� C++��ϵ��Ŀ
// ״̬�����