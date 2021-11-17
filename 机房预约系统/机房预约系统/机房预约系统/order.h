#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<fstream>
#include"globalFile.h"
#include<map>


class Order
{
public:
	Order();

	void updateorder();

	int m_size;

	map<int, map<string, string>> m_orderData;
	
};