# pragma once //��ֹͷ�ļ��ظ�
# include <iostream> //�������������ͷ�ļ�
using namespace std; //ʹ�ñ�׼�����ռ�
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
	// չʾ�˵�
	void Show_Menu();
	// �˳�ϵͳ
	void ExitSystem();
	// ���ְ��
	void Add_Emp();
	//�����ļ�
	void Save();
	//ͳ������
	int get_EmpNum();
	void init_Emp();
	void Show_Emp();
	//ɾ��ְ��
	void Del_Emp();
	//�޸�ְ����Ϣ
	void Mod_Emp();
	void Find_Emp();
	void sort_Emp();
	void Clean_Flie();
	//�ж��Ƿ����
	int IsExist(int id);

	//�ж��ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//��ʾְ��
	
	// ��¼ְ������
	int m_EmpNum;
	// ְ������ָ��
	Worker**  m_EmpArray;



	~WorkerManager();

private:

};

