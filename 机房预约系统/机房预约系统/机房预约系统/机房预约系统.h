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
	//构造函数
	Computer_room_system();

	//析构函数
	~Computer_room_system();

	//菜单界面
	void main_meau();

	
};