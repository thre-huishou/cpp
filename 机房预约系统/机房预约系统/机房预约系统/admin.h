#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include"Person.h"
#include<string>
#include<iostream>
#include<fstream>
#include"globalFile.h"
#include<vector>
#include"computer_room.h"
#include"student.h"
#include"teacher.h"
using namespace std;


enum
{
	admin_exit,
	add_person,
	show_person,
	show_computer,
	clear_order
};


class Admin :public Person
{
public:
	//Ĭ�Ϲ���
	Admin();
	//��������
	Admin(string name,string password);
	//��������
	~Admin();
	//�˵�����
	virtual void operMenu();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void clearFile();

	//��ʼ������
	void initvector();

	//ѧ������
	vector<Student> vstu;

	//��ʦ����
	vector<Teacher> vtea;

	//ȥ�غ���
	bool checkRepeat(int id, int type);

	//��������
	vector<computerroom> v_com;

};
