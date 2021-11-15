#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"speaker.h"

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

	//存放比赛论数
	int m_index;
};