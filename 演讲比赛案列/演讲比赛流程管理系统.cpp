#pragma once
#include "SpeechManager.h"
#include "Speaker.h"
using namespace std;


void test01()
{
	SpeechManager SP;
	// ����
	//for (map<int, Speaker>::iterator it = SP.m_speaker.begin(); it != SP.m_speaker.end(); it++)
	//{
	//	cout << (*it).first << (*it).second.m_name <<(*it).second.m_score[1] << endl;
	//}


	SP.showmeau();




	while (true)
	{
		int choice;
		cout << "������Ҫ��ɶ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			// ��ʼ����
			SP.startSpeech();
			break;
		case 2:
			// �鿴�����¼
			break;
		case 3:
			// ���
			break;

		case 0:
			SP.myexit();
			break;


		default:
			system("cls");//����
			break;
		}


	}


}



int main()
{



	test01();
	return 0;
}

