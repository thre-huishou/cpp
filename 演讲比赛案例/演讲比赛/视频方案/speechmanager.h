#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
#include"speaker.h"
#include<numeric>
#include<algorithm>
#include<ctime>
#include<deque>
#include<fstream>

enum
{
	myexit,
	start,
	history,
	clear
};

class SpeechManager
{
public:
	//构造
	SpeechManager();
	//析构
	~SpeechManager();

	void shoemeau();

	//初始化容器和属性
	void initspeech();

	//成员属性
	//第一轮选手编号
	vector<int> v1;

	//第一轮晋级选手编号
	vector<int> v2;

	//胜出前三名选手编号
	vector<int> v3;

	//存放具体编号以及具体选手容器
	map<int, Speaker>m_speaker;

	bool fileIsempty;

	map<int, vector<string>> m_his;
	//存放比赛论数
	int m_index;

	//创建选手
	void createspeaker();

	//比赛整个流程
	void start_speech();

	//抽签
	void speechdraw();

	//比赛
	void speech_contest();

	void myprint();

	void mysave();

	void load_history();

	void read_history();

	void myclear();
};


class Greater
{
public:
	bool operator()(double val1, double val2)
	{
		return val1 > val2;
	}
};
class myGreater
{
public:
	bool operator()(Speaker&p1, Speaker&p2)
	{
		return p1.m_score > p2.m_score;
	}
};

