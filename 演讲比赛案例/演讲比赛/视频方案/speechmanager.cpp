#define _CRT_SECURE_NO_WARNINGS 1
#include"speechmanager.h"

//���캯��
SpeechManager::SpeechManager()
{
	this->initspeech();
}

//��������
SpeechManager::~SpeechManager()
{

}

void SpeechManager::shoemeau()
{
	cout << "**************************************************" << endl;
	cout << "***************  ��ӭ�μ��ݽ�����  ***************" << endl;
	cout << "***************   1.��ʼ�ݽ�����   ***************" << endl;
	cout << "***************   2.�鿴�����¼   ***************" << endl;
	cout << "***************   3.��ձ�����¼   ***************" << endl;
	cout << "***************   0.�˳���������   ***************" << endl;
	cout << "**************************************************" << endl;
	cout << endl;
}

void SpeechManager::initspeech()
{
	//�������ǿ�
	v1.clear();
	v2.clear();
	v3.clear();
	m_speaker.clear();

	m_index = 1;
}