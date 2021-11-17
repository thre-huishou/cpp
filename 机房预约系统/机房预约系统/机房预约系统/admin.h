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
	//默认构造
	Admin();
	//参数构造
	Admin(string name,string password);
	//析构函数
	~Admin();
	//菜单函数
	virtual void operMenu();

	//添加账号
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约记录
	void clearFile();

	//初始化容器
	void initvector();

	//学生容器
	vector<Student> vstu;

	//老师容器
	vector<Teacher> vtea;

	//去重函数
	bool checkRepeat(int id, int type);

	//机房容器
	vector<computerroom> v_com;

};
