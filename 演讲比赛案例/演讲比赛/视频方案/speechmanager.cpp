#define _CRT_SECURE_NO_WARNINGS 1
#include"speechmanager.h"

//构造函数
SpeechManager::SpeechManager()
{
	this->initspeech();
}

//析构函数
SpeechManager::~SpeechManager()
{

}

void SpeechManager::shoemeau()
{
	cout << "**************************************************" << endl;
	cout << "***************  欢迎参加演讲比赛  ***************" << endl;
	cout << "***************   1.开始演讲比赛   ***************" << endl;
	cout << "***************   2.查看往届记录   ***************" << endl;
	cout << "***************   3.清空比赛记录   ***************" << endl;
	cout << "***************   0.退出比赛程序   ***************" << endl;
	cout << "**************************************************" << endl;
	cout << endl;
}

void SpeechManager::initspeech()
{
	//容器都是空
	v1.clear();
	v2.clear();
	v3.clear();
	m_speaker.clear();

	m_index = 1;
}