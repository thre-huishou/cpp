#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include"student.h"
#include"teacher.h"
#include"admin.h"
#include"Person.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

enum
{
	myexit,
	student,
	teacher,
	admin
};


class Computer_room_system
{
public:
	//���캯��
	Computer_room_system();

	//��������
	~Computer_room_system();

	//�˵�����
	void main_meau();

	
};