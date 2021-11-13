#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<deque>
#include<vector>
#include<string>
#include<algorithm>
#include<ctime>

//有5名选手：ABCDE，10个评委分别对每一位选手打分，去除最高分，去除最低分，取平均值
//创建5名选手，放到vector中
//遍历vctor容器，取出来每一个选手，执for循环，可以把10个评委打分存到deque中
//sort算法对deque中分数排序，去除最高分和最低分
//deque容器遍历一遍，累加总分
//获取平均分
//int main()
//{
//	//1
//	vector<deque<int>> xuanshou;
//	for (int i = 0; i < 5; i++)
//	{
//		deque<int> deq;
//		for (int j = 0; j < 10; j++)
//		{
//			deq.push_back(j);
//		}
//		xuanshou.push_back(deq);
//	}
//	for (vector<deque<int>>::iterator it = xuanshou.begin(); it != xuanshou.end(); it++)
//	{
//		cout << "选手评分：" << endl;
//		for (deque<int>::iterator itt = (*it).begin(); itt != (*it).end(); itt++)
//		{
//			cout << *itt << " ";
//		}
//		cout << endl;
//		sort((*it).begin(), (*it).end());
//		(*it).pop_back();
//		(*it).pop_front();
//		cout << "选手评分(去除高低分)：" << endl;
//		for (deque<int>::iterator itt = (*it).begin(); itt != (*it).end(); itt++)
//		{
//			cout << *itt << " ";
//		}
//		cout << endl;
//		int sum = 0;
//		for (deque<int>::iterator itt = (*it).begin(); itt != (*it).end(); itt++)
//		{
//			sum += *itt;
//		}
//		cout << sum/8.0 << endl;
//	}
//
//	return 0;
//}

//选手类
class Person
{
public:
	Person(string name, float score)
	{
		m_name = name;
		m_score = score;
	}
	string m_name;
	float m_score;
};

void createPerson(vector<Person> &v)
{
	Person p1("张三",0);
	Person p2("李四",0);
	Person p3("王二",0);
	Person p4("麻子",0);
	Person p5("赵五",0);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
}

void setscore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it).m_name << ":" << endl;
		deque<int> d;
		for (int j = 0; j < 10; j++)
		{
			int tmp = rand() % 41 + 60;
			cout << tmp << " ";
			d.push_back(tmp);
		}
		cout << endl;
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		cout << (*it).m_name << "(去掉最高最低之后):" << endl;
		for (deque<int>::iterator itbegin=d.begin();itbegin!=d.end();itbegin++)
		{
			cout << *itbegin << " ";
		}
		cout << endl;
		int score = 0;
		for (deque<int>::iterator itbegin = d.begin(); itbegin != d.end(); itbegin++)
		{
			score += *itbegin;
		}
		(*it).m_score = score/8.0;
	}
}

int main()
{
	srand((unsigned int)time(NULL));//随机数种子
	//创建5名选手
	vector<Person> v;
	createPerson(v);
	//测试
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名:" << (*it).m_name << " 分数:" << (*it).m_score << endl;
	//}

	//打分
	setscore(v);
	//显示最后得分
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_name << " 最终得分为：" << (*it).m_score << endl;
	}
	return 0;
}