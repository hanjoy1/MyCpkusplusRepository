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
	string nameseed = "ABCDEFGHIJKL";
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
	this->showScore();
	// �ڶ��ֿ�ʼ����
	this->round++;
	// 1.��ǩ
	this->speechdraw();
	// 2.����
	this->speechcontest();
	// 3.��ʾ�������
	this->showScore();

	//4.�������
	this->saverecord();

	cout << "�����������" << endl;
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

	// ׼����ʱ���� ���С��ɼ�
	multimap<double, int, greater<double>> groupScore;
	int num = 0;//��¼��Ա���� 6��һ��

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
		num++;
		//��ί���
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f; //600-1000
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;

		sort(d.begin(), d.end(), greater<double>()); //����
		d.pop_front(); // ȥ����߷�
		d.pop_back(); // ȥ����ͷ�


		double sum = accumulate(d.begin(), d.end(), 0);
		double avg = sum / (double)d.size(); //ƽ����
		/*system("pause");*/
		//cout << endl;

		//��ӡƽ����
		//cout << "��ţ�" << *it << "������" << this->m_speaker[*it].m_name << "��ȡƽ���֣�" << avg << endl;


		// ��ƽ���ַ���map ��
		this->m_speaker[*it].m_score[this->round - 1] = avg;

		// ������ʱ����
		groupScore.insert(pair<int, int>(avg, *it));
		// ÿ6������ȡǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С��������Σ�" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{

				cout << (*it).second << "  " << this->m_speaker[(*it).second].m_name << " "<<this->m_speaker[(*it).second].m_score[this->round-1] <<endl;

			}


			//ȡ��ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++, count++)
			{
				if (count < 3)
				{
					if (this->round == 1)
					{
						v2.push_back((*it).second);
					}
					else
					{
						v3.push_back((*it).second);
					}
				}
			}
			groupScore.clear();
		}

		
	}
	cout << "��" << this->round << "�ֱ������" << "-------------" << endl;
	system("pause");
}
void SpeechManager::showScore()
{
	vector<int> v;
	cout << "---------------��" << this->round << "�ֽ���ѡ����Ϣ����-------------" << endl;
	if (this->round == 1)
	{
		v = v2;
	}
	else
	{
		v = v3;
	}

	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�ֱ�ţ�" << *it << " ������" << this->m_speaker[*it].m_name << "�ɼ���" << this->m_speaker[*it].m_score[this->round - 1] << endl;
	}
	cout << endl;

	system("pause");
	this->showmeau();

}

void SpeechManager::saverecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app); //׷�ӷ�ʽд�ļ�
	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
	{
		ofs << *it << "," << this->m_speaker[*it].m_score[1]<<",";
	}
	ofs << endl;

	//�ر�
	ofs.close(); 
	cout << "��¼��������" << endl;
}

void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in); //���ļ�
	if (!ifs.is_open())
	{
		this->fileIsenpty = true;
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
		this->fileIsenpty = true;
		ifs.close();
		return;
	}
	//�ļ���Ϊ��
	this->fileIsenpty = false;

	ifs.putback(ch); //������ĵ����ַ��Ż���
	int index = 1;
	string data;
	while (ifs >> data)
	{
		//cout << data << endl;
		vector<string> v; //���6��string �ַ���

		int pos = -1;
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1);
			{
				// û���ҵ�
			}
			string temp = data.substr(start, pos - start);
			cout << temp << endl;
			v.push_back(temp);
			start = pos + 1;
		}

		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();

	for (map<int, vector<string>>::iterator it = this->m_Record.begin(); it != this->m_Record.end(); it++)
	{
		cout << (*it).first << "�ھ���ţ�" << (*it).second[0] << "������" << (*it).second[1] << endl;
	}

}

void SpeechManager::showRecord()
{
	for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout << "��" << i + 1 << "��"
			<< "�ھ��ı�ţ�" << this->m_Record[i][0] << "�÷�" << this->m_Record[i][1] << " "
			<< "�Ǿ��ı�ţ�" << this->m_Record[i][2] << "�÷�" << this->m_Record[i][3] << " "
			<< "�����ı�ţ�" << this->m_Record[i][4] << "�÷�" << this->m_Record[i][5] << " " << endl;
	}

	system("pause");
	system("cls");

}