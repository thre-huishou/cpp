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
	//默认构造
	Teacher();
	//参数构造
	Teacher( int id, string name,string password);
	//析构函数
	~Teacher();
	//菜单函数
	virtual void operMenu();

	//查看所有预约
	void showAllOrder();

	//审核预约
	void validOrder();

};