#define _CRT_SECURE_NO_WARNINGS 1
#include"Parter.h"

void set_Parter(vector<Person>&v)
{
	for (int i = 0; i < 12; i++)
	{
		int name = 10001 + i;
		Person p(name, 0);
		v.push_back(p);
	}
}

void myprint(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手编号：" << it->m_id << " 选手得分：" << it->m_score << endl;
	}
}

void getscore(vector<Person>&v)
{
	//十分制
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (int i = 0; i < 10; i++)
		{
			int num=rand() % 11;//随机打分
			it->m_deq.push_back(num);
		}
	}
}

void print_score(vector<Person>&v)
{
	int num = v.size();
	for (int i = 0; i < num; i++)
	{
		cout << "选手编号为" << v[i].m_id << "得分：" << endl;
		for (int j = 0; j < 10; j++)
		{
			cout << v[i].m_deq[j] << " ";
		}
		cout << endl;
	}
}

void cal_score(vector<Person>&v)
{
	for (int i = 0; i < 6; i++)
	{
		sort(v[i].m_deq.begin(), v[i].m_deq.end());
		v[i].m_deq.pop_back();
		v[i].m_deq.pop_front();
		int score=accumulate(v[i].m_deq.begin(), v[i].m_deq.end(), 0);
		v[i].m_score = score / 8.0;
	}
	sort(v.begin(),v.end(), Greater());
}
