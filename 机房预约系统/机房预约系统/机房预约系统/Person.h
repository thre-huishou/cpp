#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;

//��ݵĳ������
class Person
{
public:
	string m_name;
	string m_pass_word;

	virtual void operMenu() = 0;

};