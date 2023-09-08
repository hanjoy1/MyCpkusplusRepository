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
	this->round = 1;

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

void SpeechManager::startSpeech()
{	
	// ��һ�ֿ�ʼ����

	// 1.��ǩ
	this->speechdraw();
	// 2.����
	this ->speechcontest();
	// 3.��ʾ�������

	// �ڶ��ֿ�ʼ����

	// 1.��ǩ

	// 2.����

	// 3.��ʾ�������

}

void SpeechManager::speechdraw()
{
	cout << "��" << this->round << "�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "--------------------------------" << endl;
	cout << "��ǩ���ݽ�˳�����£�" << endl;

	if (this->round == 1)
	{
		//��һ�ֱ���
		random_shuffle(v1.begin(), v1.end());
		for (vector<int> ::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//�ڶ��ֱ���
		random_shuffle(v2.begin(), v2.end());
		for (vector<int> ::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "--------------------------------" << endl;
	system("pause");
	

}

void SpeechManager::speechcontest() 
{
	cout << "��" << this->round << "�ֱ�����ʼ��" << "---------" << endl;

	vector<int> v_src; //����ѡ������

	if (this->round == 1)
	{
		v_src = v1;
	}
	else
	{
		v_src = v2;
	}

	//��������ѡ�ֽ��б���
	deque<double> d;
	for (vector<int> ::iterator it = v_src.begin(); it != v_src.end(); it++)
	{
		//��ί���
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600)/10.f; //600-1000
			cout << score << " ";
			d.push_back(score);
		}
		sort(d.begin(), d.end(), greater<double>()); //����
		d.pop_front(); // ȥ����߷�
		d.pop_back(); // ȥ����ͷ�
	}

	double sum = accumulate(d.begin(), d.end(), 0);
	double avg = sum / (double)d.size(); //ƽ����
	system("pause");

}