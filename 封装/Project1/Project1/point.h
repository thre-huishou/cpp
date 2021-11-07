#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<string>
#include<cmath>
#include"circle.h"

using namespace std;

class Dot
{
	int m_x;
	int m_y;
public:
	void setxy(int& x, int& y);
	int getx();
	int gety();
	bool panduan(Circle& c);
};