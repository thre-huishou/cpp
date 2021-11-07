#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<string>
#include<cmath>

class Circle
{
	int m_x;
	int m_y;
	int m_r;
public:
	void setxyr(int& x, int& y, int& r);
	int getx();
	int gety();
	int getr();
};