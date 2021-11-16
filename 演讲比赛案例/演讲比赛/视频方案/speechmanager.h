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
	//����
	SpeechManager();
	//����
	~SpeechManager();

	void shoemeau();

	//��ʼ������������
	void initspeech();

	//��Ա����
	//��һ��ѡ�ֱ��
	vector<int> v1;

	//��һ�ֽ���ѡ�ֱ��
	vector<int> v2;

	//ʤ��ǰ����ѡ�ֱ��
	vector<int> v3;

	//��ž������Լ�����ѡ������
	map<int, Speaker>m_speaker;

	bool fileIsempty;

	map<int, vector<string>> m_his;
	//��ű�������
	int m_index;

	//����ѡ��
	void createspeaker();

	//������������
	void start_speech();

	//��ǩ
	void speechdraw();

	//����
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

