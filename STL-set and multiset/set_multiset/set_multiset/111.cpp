#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<set>

//void myprint(set<int>&s)
//{
//	set<int>::iterator it = s.begin();
//	for (; it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}

//int main()
//{
//	set<int> s1;
//	s1 = {4,5,6 ,1,2,3 };
//
//	set<int> s2 = s1;
//
//	set<int> s3(s2);
//
//	s1.insert(10);
//	s1.insert(10);//�������ظ�����
//	s1.insert(20);
//	myprint(s1);
//	return 0;
//}

//set�����Ĵ�С�뽻��
//int main()
//{
//	set<int> s1;
//	s1.insert(40);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//
//	cout << "s1�Ĵ�С��" << s1.size() << endl;
//	cout << (s1.empty() ? "Ϊ��" : "��Ϊ��" )<< endl;
//	set<int> s2 = { 1,5,3,6 };
//	s1.swap(s2);
//	myprint(s1);
//
//	//ɾ�������
//	s1.insert(8);
//	myprint(s1);
//	s1.erase(3);
//	myprint(s1);
//	set<int>::iterator it = s1.begin();
//	set<int>::iterator itend = s1.end();
//	s1.erase(++it);
//	myprint(s1);
//	//s1.clear();
//	//myprint(s1);
//	it = s1.begin();
//	itend = s1.end();
//	s1.erase(++it, --itend);
//	myprint(s1);
//	return 0;
//}


//set�Ĳ�����ͳ��
//int main()
//{
//	set<int> s1;
//	s1.insert(1);
//	s1.insert(2);
//	s1.insert(3);
//	s1.insert(4);
//	s1.insert(5);
//
//	set<int>::iterator it = s1.find(4);
//	if (it == s1.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << *it << endl;
//	}
//	cout << s1.count(4) << endl;
//	return 0;
//}


//set��multiset
//int main()
//{
//	set<int> s1;
//	s1.insert(10);
//	pair<set<int>::iterator,bool>ret= s1.insert(10);
//	if (ret.second)
//	{
//		cout << "����ɹ�" << endl;
//		cout << *ret.first << endl;
//	}
//	else
//	{
//		cout << "����ʧ��" << endl;
//	}
//
//	multiset<int> m1;
//	m1.insert(10);
//	m1.insert(10);
//	for (multiset<int>::iterator itt = m1.begin(); itt != m1.end(); itt++)
//	{
//		cout << *itt << " ";
//	}
//	cout << endl;
//	return 0;
//}

//pair����Ĵ���
//#include<string>
//int main()
//{
//	//���ִ�����ʽ
//	pair<string, int>p("tom", 18);
//	cout << p.first << " " << p.second << endl;
//
//	pair<string, int>p2=make_pair("tom", 18);
//	cout << p2.first << " " << p2.second << endl;
//	return 0;
//}


//set����������-���÷º���

//������������
//class Mycompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void myprint(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(50);
//	s1.insert(20);
//	s1.insert(40);
//	myprint(s1);
//
//	set<int, Mycompare>s2;
//	s2.insert(10);
//	s2.insert(30);
//	s2.insert(50);
//	s2.insert(20);
//	s2.insert(40);
//	for (set<int, Mycompare>::iterator it2 = s2.begin(); it2 != s2.end(); it2++)
//	{
//		cout << *it2 << " ";
//	}
//	cout << endl;
//	return 0;
//}

//�Զ�����������
#include<string>

class Person
{
public:
	string m_name;
	int m_age;
	int m_height;
	Person(string name, int age, int height)
	{
		m_name = name;
		m_age = age;
		m_height = height;
	}
};

class Mycomnpare 
{
public:
	bool operator()(const Person &p1, const Person &p2)
	{
		if (p1.m_age == p2.m_age)
		{
			return p1.m_height < p2.m_height;
		}
		else
		{
			return p1.m_age > p2.m_age;
		}
	}
};

int main()
{
	set<Person, Mycomnpare> s1;
	Person p1("����", 14, 175);
	Person p2("����", 18, 176);
	Person p3("����", 15, 170);
	Person p4("����", 18, 180);
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person, Mycomnpare>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "������" << it->m_name << " ���䣺" 
			<< it->m_age << " ��ߣ�" << it->m_height << endl;
	}
	return 0;
}