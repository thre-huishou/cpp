#define _CRT_SECURE_NO_WARNINGS 1
#include"point.h"
#include"circle.h"

	void Dot::setxy(int& x, int& y)
	{
		m_x = x;
		m_y = y;
	}
	int Dot::getx()
	{
		return m_x;
	}
	int Dot::gety()
	{
		return m_y;
	}
	bool Dot::panduan(Circle& c)
	{
		double len = (m_x - c.getx()) *(m_x - c.getx()) + (m_y - c.gety())*(m_y - c.gety());
		len = sqrt(len);
		if (len <= c.getr())
		{
			return true;
		}
		else
		{
			return false;
		}
	}