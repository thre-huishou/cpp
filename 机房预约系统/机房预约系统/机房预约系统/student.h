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
	//默认构造
	Student();
	//参数构造
	Student( int id,string name, string password);
	//析构函数
	~Student();
	//菜单函数
	virtual void operMenu();

	//申请预约
	void applyOrder();

	//查看所有预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void cancelOrder();

	vector<computerroom> v_com;


};