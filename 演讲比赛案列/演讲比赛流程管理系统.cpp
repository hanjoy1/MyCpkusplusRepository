#pragma once
#include "SpeechManager.h"
#include "Speaker.h"
using namespace std;


void test01()
{
	SpeechManager SP;
	// 测试
	//for (map<int, Speaker>::iterator it = SP.m_speaker.begin(); it != SP.m_speaker.end(); it++)
	//{
	//	cout << (*it).first << (*it).second.m_name <<(*it).second.m_score[1] << endl;
	//}


	SP.showmeau();




	while (true)
	{
		int choice;
		cout << "你他妈要干啥？" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			// 开始比赛
			SP.startSpeech();
			break;
		case 2:
			// 查看往届记录
			break;
		case 3:
			// 清空
			break;

		case 0:
			SP.myexit();
			break;


		default:
			system("cls");//清屏
			break;
		}


	}


}



int main()
{



	test01();
	return 0;
}

