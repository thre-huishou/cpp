#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include"Person.h"
#include<iostream>
#include<string>
#include"student.h"
using namespace std;

enum
{
	tea_exit,
	tea_showallorder,
	tea_validorder
};

class Teacher :public Person
{
public:
	int m_id;
	//Ĭ�Ϲ���
	Teacher();
	//��������
	Teacher( int id, string name,string password);
	//��������
	~Teacher();
	//�˵�����
	virtual void operMenu();

	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();

};