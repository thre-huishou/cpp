#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include"Person.h"
#include<string>
#include<iostream>
#include<fstream>
#include"globalFile.h"
#include<vector>
#include<algorithm>
#include"computer_room.h"
#include"order.h"
using namespace std;


enum
{
	stu_exit,
	apply_order,
	show_my_order,
	show_all_order,
	cancel_order
};

class Student :public Person
{
public:
	int m_id;
	//Ĭ�Ϲ���
	Student();
	//��������
	Student( int id,string name, string password);
	//��������
	~Student();
	//�˵�����
	virtual void operMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴����ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	vector<computerroom> v_com;


};