#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<deque>
#include<vector>
#include<string>
#include<algorithm>
#include<ctime>

//��5��ѡ�֣�ABCDE��10����ί�ֱ��ÿһλѡ�ִ�֣�ȥ����߷֣�ȥ����ͷ֣�ȡƽ��ֵ
//����5��ѡ�֣��ŵ�vector��
//����vctor������ȡ����ÿһ��ѡ�֣�ִforѭ�������԰�10����ί��ִ浽deque��
//sort�㷨��deque�з�������ȥ����߷ֺ���ͷ�
//deque��������һ�飬�ۼ��ܷ�
//��ȡƽ����
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
//		cout << "ѡ�����֣�" << endl;
//		for (deque<int>::iterator itt = (*it).begin(); itt != (*it).end(); itt++)
//		{
//			cout << *itt << " ";
//		}
//		cout << endl;
//		sort((*it).begin(), (*it).end());
//		(*it).pop_back();
//		(*it).pop_front();
//		cout << "ѡ������(ȥ���ߵͷ�)��" << endl;
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

//ѡ����
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
	Person p1("����",0);
	Person p2("����",0);
	Person p3("����",0);
	Person p4("����",0);
	Person p5("����",0);
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
		cout << (*it).m_name << "(ȥ��������֮��):" << endl;
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
	srand((unsigned int)time(NULL));//���������
	//����5��ѡ��
	vector<Person> v;
	createPerson(v);
	//����
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "����:" << (*it).m_name << " ����:" << (*it).m_score << endl;
	//}

	//���
	setscore(v);
	//��ʾ���÷�
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it).m_name << " ���յ÷�Ϊ��" << (*it).m_score << endl;
	}
	return 0;
}