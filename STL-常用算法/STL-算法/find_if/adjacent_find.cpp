#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>


//int main()
//{
//	vector<int>v1;
//	v1.push_back(1);
//	v1.push_back(3);
//	v1.push_back(6);
//	v1.push_back(4);
//	v1.push_back(5);
//
//	vector<int>::iterator it = adjacent_find(v1.begin(), v1.end());
//	if (it == v1.end())
//	{
//		cout << "������" << endl;
//	}
//	return 0;
//}

//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	bool ret = binary_search(v1.begin(), v1.end(), 10);
//	if (ret)
//	{
//		cout << "����" << endl;
//	}
//	else
//	{
//		cout << "������" << endl;
//	}
//	return 0;
//}

//count
//������������
//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	v1.push_back(5);
//
//	int num = count(v1.begin(), v1.end(), 2);
//	cout << num << endl;
//	return 0;
//}


//�Զ�����������
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//	Person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	bool operator==(const Person &p1)
//	{
//		return this->m_age == p1.m_age;
//	}
//};
//int main()
//{
//	Person p1("����", 18);
//	Person p2("����", 18);
//	Person p3("����", 17);
//	Person p4("����", 18);
//	vector<Person> v1;
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//
//	int ret = count(v1.begin(), v1.end(), p1);
//	cout << ret << endl;
//
//	return 0;
//}


//count_if

//������������

//class GG
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//int main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(40);
//	v1.push_back(40);
//
//	int num = count_if(v1.begin(), v1.end(), GG());
//	cout << num << endl;
//	return 0;
//}

//�Զ�����������
class Person
{
public:
	string m_name;
	int m_age;
	Person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
};
class GG
{
public:
	bool operator()(const Person&p)
	{
		return p.m_age > 16;
	}
};


int main()
{
	vector<Person> v1;
	Person p1("����", 18);
	Person p2("����", 14);
	Person p3("����", 16);
	Person p4("����", 18);
	Person p5("����", 18);
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);
	v1.push_back(p5);

	int num = count_if(v1.begin(), v1.end(), GG());
	cout << num << endl;
	return 0;
}