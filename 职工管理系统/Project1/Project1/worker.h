#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<fstream>

//职工的抽象类
class worker
{
public:
	int m_id;
	string m_name;
	int m_dpt_id;

	virtual void showInfo() = 0;
	virtual string getDeptName() = 0;
};