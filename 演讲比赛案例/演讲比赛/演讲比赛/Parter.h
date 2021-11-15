#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>
#include<deque>
#include<numeric>
using namespace std;

class Person
{
public:
	int m_id;
	float m_score;
	deque<int> m_deq;
	Person(){}
	Person(int id, float score)
	{
		m_id = id;
		m_score = score;
	}
};

class Greater
{
public:
	bool operator()(Person & p1, Person& p2)
	{
		return p1.m_score > p2.m_score;
	}
};
class GG
{
public:
	bool operator()(const Person&p1, const Person&p2)
	{
		return p1.m_score > p2.m_score;
	}
};

void set_Parter(vector<Person>&v);
void myprint(vector<Person>&v);
void getscore(vector<Person>&v);
void print_score(vector<Person>&v);
void cal_score(vector<Person>&v);
