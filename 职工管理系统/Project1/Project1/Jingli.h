#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
using namespace std;
#include<iostream>
#include"worker.h"


class Jingli :public worker
{
public:
	Jingli(int id, string name, int dpt_id);
	virtual void showInfo();
	virtual string getDeptName();
};