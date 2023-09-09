#pragma once 
#include<iostream>
#include<vector>
#include<map>
#include "Speaker.h"
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<fstream>
using namespace std;

// ����ݽ�����������
class SpeechManager
{
public:

	// ���캯��
	SpeechManager();
	// ��������
	~SpeechManager();
	// չʾ
	void showmeau();
	// �˳�
	void myexit();
	// ��ʼ������
	void initSpeech();
	// ������
	void createspeakers();
	// ��ʼ����
	void startSpeech();
	// ��ǩ
	void speechdraw();
	// ����
	void speechcontest();
	// ��ʾ�������
	void showScore();
	// �����¼
	void saverecord();
	// ��ȡ��¼
	void loadRecord();
	// ��ʾ�����¼
	void showRecord();
	// ��ʾ����÷�
	void showRecrd();


	vector<int> v1; // ��һ�ֱ����� ���
	vector<int> v2; // ��һ�ֽ����� ���
	vector<int> v3; // ����ʤ��

	//��ű�ź;���ѡ�ֵ�����
	map<int, Speaker> m_speaker;

	// ����ִεı���
	int round;
	bool fileIsenpty;

	map<int, vector<string>> m_Record;



};