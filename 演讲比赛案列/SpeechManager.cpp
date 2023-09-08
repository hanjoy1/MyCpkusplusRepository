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
	this->round = 1;

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

void SpeechManager::startSpeech()
{	
	// 第一轮开始比赛

	// 1.抽签
	this->speechdraw();
	// 2.比赛
	this ->speechcontest();
	// 3.显示晋级结果

	// 第二轮开始比赛

	// 1.抽签

	// 2.比赛

	// 3.显示晋级结果

}

void SpeechManager::speechdraw()
{
	cout << "第" << this->round << "轮比赛选手正在抽签" << endl;
	cout << "--------------------------------" << endl;
	cout << "抽签后演讲顺序如下：" << endl;

	if (this->round == 1)
	{
		//第一轮比赛
		random_shuffle(v1.begin(), v1.end());
		for (vector<int> ::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//第二轮比赛
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
	cout << "第" << this->round << "轮比赛开始了" << "---------" << endl;

	vector<int> v_src; //比赛选手容器

	if (this->round == 1)
	{
		v_src = v1;
	}
	else
	{
		v_src = v2;
	}

	//遍历所有选手进行比赛
	deque<double> d;
	for (vector<int> ::iterator it = v_src.begin(); it != v_src.end(); it++)
	{
		//评委打分
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600)/10.f; //600-1000
			cout << score << " ";
			d.push_back(score);
		}
		sort(d.begin(), d.end(), greater<double>()); //排序
		d.pop_front(); // 去除最高分
		d.pop_back(); // 去除最低分
	}

	double sum = accumulate(d.begin(), d.end(), 0);
	double avg = sum / (double)d.size(); //平均分
	system("pause");

}