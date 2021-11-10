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
	//展示菜单
	void showmeau();
	void exitsystem();
	~guanlixitong();
	int  m_empnum;
	//判断文件是否为空
	bool is_empty;

	worker** m_emparray;
	//添加职工
	void addInfo();
	//统计文件中的职工人数
	int get_empnum();
	void init_emp();
	void save();
	void print();

	//删除职工
	void del_emp();
	//判断职工是否存在
	int isexist(int id);

	//修改职工信息
	void mod_emp();

	//查找
	void find_emp();

	//排序
	void sort_emp();

	//清零
	void clear_emp();
};