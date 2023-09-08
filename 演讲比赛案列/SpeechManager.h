#pragma once 
#include<iostream>
#include<vector>
#include<map>
#include "Speaker.h"
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
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

	vector<int> v1; // ��һ�ֱ����� ���
	vector<int> v2; // ��һ�ֽ����� ���
	vector<int> v3; // ����ʤ��

	//��ű�ź;���ѡ�ֵ�����
	map<int, Speaker> m_speaker;

	// ����ִεı���
	int round;
	



};