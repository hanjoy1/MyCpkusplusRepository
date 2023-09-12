#define _CRT_SECURE_NO_WARINGS 1
#define MAX 1000 

// ��װ������ʾ����
// main�������÷�װ�õĺ���
#include <iostream>
#include <string>
using namespace std;

//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա�
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};
//ͨ��¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX]; //ͨ��¼�б������ϵ������
	int m_size; //ͨ��¼����Ա����

};

void addPreson(Addressbooks* abs)
{
	//ͨ��¼����
	if (abs->m_size == MAX)
	{
		cout << "ͨ��¼����" << endl; 
		return;
	}
	else
	{
		//�����ϵ��
		// 
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;
		//�Ա�
		cout << "��ѡ���Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int Sex = 0;
		while (true)
		{
			//������ȷ���ܼ���
			cin >> Sex;
			if (Sex == 1 || Sex == 2)
			{
				abs->personArray[abs->m_size].m_Sex = Sex;
				break;
			}
			cout << "����������" << endl;
		}
		//����
		cout << "����������" << endl;
		int Age = 0;
		cin >> Age;
		abs->personArray[abs->m_size].m_Age = Age;
		//�绰
		cout << "��������ϵ�绰" << endl;
		string Phone;
		cin >> Phone;
		abs->personArray[abs->m_size].m_Phone = Phone;
		//סַ
		cout << "������סַ" << endl;
		string Addr;
		cin >> Addr;
		abs->personArray[abs->m_size].m_Addr = Addr;

		//����ͨ��¼
		abs->m_size++;
		cout << "�ɹ����" << endl;

		system("pause");//�����������
		system("cls");//����
	}
}

void showPerson(Addressbooks* abs)
{
	//�ж���û��
	if (abs->m_size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		int i = 0;
		for (i = 0; i < abs->m_size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��":"Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr  << endl;
		}
	}
	system("pause");
	system("cls");
}

int isExist(Addressbooks* abs, string s)
{
	int i = -1;
	for (i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_Name == s)
		{
			return i;
		}		
	}
			return -1;
}
//ɾ����ϵ��
void deletePerson(Addressbooks* abs,string s)
{
	/*
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	*/
	int ret = isExist(abs, s);
	if (ret != -1) //�鵽������
	{
		for (size_t i = ret ; i < abs->m_size ; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "ɾ���ɹ�" << endl;
	}
}

//������ϵ��
void FindPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if ( ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}

	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks* abs)
{
	cout << "����������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		//������
		string name;
		cout << "��������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//���Ա�

		while (true)
		{
			cout << "�����������Ա�" << endl;
			int Sex;
			cin >> Sex;
			if (Sex == 1 || Sex == 2)
			{
				abs->personArray[ret].m_Sex= Sex;
				break;
			}
			cout << "��������" << endl;

		}
		
		//������
		int Age = 0;
		cout << "��������������" << endl;
		cin >> Age;
		abs->personArray[ret].m_Age = Age;

		//�ĵ绰
		string Phone;
		cout << "����������绰" << endl;
		cin >> Phone;
		abs->personArray[ret].m_Phone = Phone;

		//�ĵ�ַ
		string Addr;
		cout << "�����������ַ" << endl;
		cin >> Addr;
		abs->personArray[ret].m_Addr = Addr;
		
		cout << "�޸ĳɹ�" << endl;
	}
}

void Cleanperson(Addressbooks* abs)
{
	abs->m_size = 0; //����ǰ��¼��ϵ�˵�������0���߼��ϵ����
	cout << "ͨ��¼�����" << endl;
	//�����������
	system("pause");
	system("cls");

}
//�˵�����
void showMenu() 
{
	cout << "1.�����ϵ��" <<  endl;
	cout << "2.��ʾ��ϵ��" <<  endl;
	cout << "3.ɾ����ϵ��" <<  endl;
	cout << "4.������ϵ��" <<  endl;
	cout << "5.�޸���ϵ��" <<  endl;
	cout << "6.�����ϵ��" <<  endl;
	cout << "0.�˳�ͨ��¼" <<  endl;
}

int main() 
{

	//����ͨ��¼�ṹ��
	Addressbooks abs;
	abs.m_size = 0;
	int select = 0; //�ȶ����������

	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1: //�����ϵ��
			addPreson(&abs);//�õ�ַ���ݲ����޸�ʵ��
			break;
		case 2:	//��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:	//ɾ����ϵ�� 
		{
			cout << "��������Ҫɾ����ϵ�˵�������" << endl;
			string s;
			cin >> s;
			if (isExist(&abs, s) == -1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				deletePerson(&abs, s);
			}
			system("pause");
			system("cls");
		}
			break;
		case 4:	//������ϵ��
			FindPerson(&abs);
			break;
		case 5:	//�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:	//�����ϵ��
			Cleanperson(&abs);
			break;
		case 0:	//�˳�ͨ��¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	//�˵��ĵ���
	system("pause");
	return 0;
}