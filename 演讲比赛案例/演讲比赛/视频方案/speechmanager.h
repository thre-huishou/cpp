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

	//��ű�������
	int m_index;
};