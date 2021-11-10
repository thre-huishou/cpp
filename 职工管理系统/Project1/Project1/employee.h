#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include"worker.h"
#include<string>
using namespace std;

class Employee :public worker
{
public:
	Employee(int id, string name,int dpt_id);
	virtual void showInfo();
	virtual string getDeptName();
};