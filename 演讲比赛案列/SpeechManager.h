#pragma once 
#include<iostream>
#include<vector>
#include<map>
#include "Speaker.h"
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


	vector<int> v1; // ��һ�ֱ����� ���
	vector<int> v2; // ��һ�ֽ����� ���
	vector<int> v3; // ����ʤ��

	//��ű�ź;���ѡ�ֵ�����
	map<int, Speaker> m_speaker;

	// ����ִεı���
	int round;



};