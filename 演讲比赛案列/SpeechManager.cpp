#include "SpeechManager.h"

SpeechManager::SpeechManager() 
{
	//��ʼ��
	(*this).initSpeech();
	this->createspeakers();
}

SpeechManager::~SpeechManager()
{

}

// ϸ˵ չʾ�˵�
void SpeechManager::showmeau()
{
	cout <<"��ӭ�������ʹ�ø�ϵͳ" << endl;
	cout << "1.��ʼ������ݽ�����" << endl;
	cout << "2.�鿴��������������¼" << endl;
	cout << "3.�������ı�����¼" << endl;
	cout << "0.�˳���������ĳ���" << endl;
	cout << endl;
}

void SpeechManager::myexit()
{
	cout << "���ɣ�ף��������죡�쵰����" << endl;
	system("pause");
	exit(0);
}

// ��ʼ��
void SpeechManager::initSpeech()
{
	// �����ÿ�
	this->v1.clear();
	this->v2.clear();
	this->v3.clear();
	this->m_speaker.clear();
	this->round = 0;

}

void SpeechManager::createspeakers()
{
	string nameseed = "ABCDEFGHIJK";
	for (int i = 0; i < nameseed.size(); i++)
	{
		string name = "ѡ��";
		name += nameseed[i];

		Speaker sp;
		sp.m_name = name;
		
		for (int j = 0; j < 2; j++)
		{
			sp.m_score[j] = 0;
		}

		// �������
		this->v1.push_back(i + 10001);

		this->m_speaker.insert(make_pair(i+10001, sp));

	}

}