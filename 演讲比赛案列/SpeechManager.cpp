#include "SpeechManager.h"

SpeechManager::SpeechManager() 
{
	//初始化
	(*this).initSpeech();
	this->createspeakers();
}

SpeechManager::~SpeechManager()
{

}

// 细说 展示菜单
void SpeechManager::showmeau()
{
	cout <<"欢迎您他妈的使用该系统" << endl;
	cout << "1.开始他妈的演讲比赛" << endl;
	cout << "2.查看他妈的往届比赛记录" << endl;
	cout << "3.情况他妈的比赛记录" << endl;
	cout << "0.退出这个该死的程序" << endl;
	cout << endl;
}

void SpeechManager::myexit()
{
	cout << "滚吧！祝你生活愉快！混蛋！！" << endl;
	system("pause");
	exit(0);
}

// 初始化
void SpeechManager::initSpeech()
{
	// 容器置空
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
		string name = "选手";
		name += nameseed[i];

		Speaker sp;
		sp.m_name = name;
		
		for (int j = 0; j < 2; j++)
		{
			sp.m_score[j] = 0;
		}

		// 创建编号
		this->v1.push_back(i + 10001);

		this->m_speaker.insert(make_pair(i+10001, sp));

	}

}