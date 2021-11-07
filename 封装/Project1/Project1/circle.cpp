#define _CRT_SECURE_NO_WARNINGS 1
#include"circle.h"

	void Circle::setxyr(int& x, int& y, int& r)
	{
		m_x = x;
		m_y = y;
		m_r = r;
	}
	int Circle::getx()
	{
		return m_x;
	}
	int Circle::gety()
	{
		return m_y;
	}
	int Circle::getr()
	{
		return m_r;
	}
