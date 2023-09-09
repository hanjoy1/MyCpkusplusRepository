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
	string nameseed = "ABCDEFGHIJKL";
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
	this->showScore();
	// 第二轮开始比赛
	this->round++;
	// 1.抽签
	this->speechdraw();
	// 2.比赛
	this->speechcontest();
	// 3.显示晋级结果
	this->showScore();

	//4.保存分数
	this->saverecord();

	cout << "本届比赛结束" << endl;
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

	// 准备临时容器 存放小组成绩
	multimap<double, int, greater<double>> groupScore;
	int num = 0;//记录人员个数 6人一组

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
		num++;
		//评委打分
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f; //600-1000
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;

		sort(d.begin(), d.end(), greater<double>()); //排序
		d.pop_front(); // 去除最高分
		d.pop_back(); // 去除最低分


		double sum = accumulate(d.begin(), d.end(), 0);
		double avg = sum / (double)d.size(); //平均分
		/*system("pause");*/
		//cout << endl;

		//打印平均分
		//cout << "编号：" << *it << "姓名：" << this->m_speaker[*it].m_name << "获取平均分：" << avg << endl;


		// 将平均分放入map 中
		this->m_speaker[*it].m_score[this->round - 1] = avg;

		// 放入临时容器
		groupScore.insert(pair<int, int>(avg, *it));
		// 每6个人提取前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组比赛名次：" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{

				cout << (*it).second << "  " << this->m_speaker[(*it).second].m_name << " "<<this->m_speaker[(*it).second].m_score[this->round-1] <<endl;

			}


			//取走前三名
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
	cout << "第" << this->round << "轮比赛完毕" << "-------------" << endl;
	system("pause");
}
void SpeechManager::showScore()
{
	vector<int> v;
	cout << "---------------第" << this->round << "轮晋级选手信息如下-------------" << endl;
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
		cout << "选手编号：" << *it << " 姓名：" << this->m_speaker[*it].m_name << "成绩：" << this->m_speaker[*it].m_score[this->round - 1] << endl;
	}
	cout << endl;

	system("pause");
	this->showmeau();

}

void SpeechManager::saverecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app); //追加方式写文件
	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
	{
		ofs << *it << "," << this->m_speaker[*it].m_score[1]<<",";
	}
	ofs << endl;

	//关闭
	ofs.close(); 
	cout << "记录保存完了" << endl;
}

void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in); //读文件
	if (!ifs.is_open())
	{
		this->fileIsenpty = true;
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}
	
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空" << endl;
		this->fileIsenpty = true;
		ifs.close();
		return;
	}
	//文件不为空
	this->fileIsenpty = false;

	ifs.putback(ch); //将上面的单个字符放回来
	int index = 1;
	string data;
	while (ifs >> data)
	{
		//cout << data << endl;
		vector<string> v; //存放6个string 字符串

		int pos = -1;
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1);
			{
				// 没有找到
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
		cout << (*it).first << "冠军编号：" << (*it).second[0] << "分数：" << (*it).second[1] << endl;
	}

}

void SpeechManager::showRecord()
{
	for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout << "第" << i + 1 << "届"
			<< "冠军的编号：" << this->m_Record[i][0] << "得分" << this->m_Record[i][1] << " "
			<< "亚军的编号：" << this->m_Record[i][2] << "得分" << this->m_Record[i][3] << " "
			<< "季军的编号：" << this->m_Record[i][4] << "得分" << this->m_Record[i][5] << " " << endl;
	}

	system("pause");
	system("cls");

}