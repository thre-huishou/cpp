#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

class Boss :public worker
{
public:
	Boss(int id, string name, int dpt_id);
	virtual void showInfo();
	virtual string getDeptName();
};