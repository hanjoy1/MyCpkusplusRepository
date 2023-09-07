#pragma once 
#include<iostream>
#include<vector>
#include<map>
#include "Speaker.h"
using namespace std;

// 设计演讲比赛管理类
class SpeechManager
{
public:

	// 构造函数
	SpeechManager();
	// 析构函数
	~SpeechManager();
	// 展示
	void showmeau();
	// 退出
	void myexit();
	// 初始化容器
	void initSpeech();
	// 来点人
	void createspeakers();


	vector<int> v1; // 第一轮比赛者 编号
	vector<int> v2; // 第一轮晋级者 编号
	vector<int> v3; // 最终胜者

	//存放编号和具体选手的容器
	map<int, Speaker> m_speaker;

	// 存放轮次的变量
	int round;



};