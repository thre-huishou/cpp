#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<memory>
#include<assert.h>
using namespace std;
#define MAX 1000

enum gongneng
{
	add=1,
	print,
	dele,
	myfind,
	revise,
	clc,
	myexit=0
};

struct People
{
	string name;
	string sex;
	int age;
	string phone;
	string adder;
};

struct TXL
{
	struct People txl[MAX];
	int size;
};


//��ʼ��
void init_txl(TXL * ps);
//���ܺ�������
//�����ϵ��
void addpeople(TXL * ps);
//��ʾ��ϵ��
void printpeo(const TXL * ps);
//ɾ����ϵ��
void ddele(TXL * ps, string n);
//������ϵ��
void myfindh(TXL * ps, string n);
//�޸���ϵ��
void xiugai(TXL * ps, string n);
//�����ϵ��
void qingkong(TXL * ps);
//�˳�ͨѶ¼
