#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include"worker.h"
#include"Boss.h"
#include"Jingli.h"
#include"employee.h"
using namespace std;

enum meau
{
	myexit,
	addworker,
	printworker,
	deleteworker,
	reworker,
	findworker,
	mysort,
	myclear
};

enum gangwei
{
	Sel_Boss,
	Sel_Jingli,
	Sel_Employee
};

class guanlixitong
{
public:
	guanlixitong();
	//չʾ�˵�
	void showmeau();
	void exitsystem();
	~guanlixitong();
	int  m_empnum;
	//�ж��ļ��Ƿ�Ϊ��
	bool is_empty;

	worker** m_emparray;
	//���ְ��
	void addInfo();
	//ͳ���ļ��е�ְ������
	int get_empnum();
	void init_emp();
	void save();
	void print();

	//ɾ��ְ��
	void del_emp();
	//�ж�ְ���Ƿ����
	int isexist(int id);

	//�޸�ְ����Ϣ
	void mod_emp();

	//����
	void find_emp();

	//����
	void sort_emp();

	//����
	void clear_emp();
};