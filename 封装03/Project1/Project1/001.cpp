#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

class Phone
{
public:
	Phone(string name) :p_name(name)
	{
		cout << "phone���캯���ĵ���" << endl;
	}
	~Phone()
	{
		cout << "phone���������ĵ���" << endl;
	}
	string p_name;
};

class Person
{
public:
	Person (string name, string p_name) :m_name(name), m_phone(p_name)
	{
		cout << "person���캯���ĵ���" << endl;
	}
	~Person()
	{
		cout << "person���������ĵ���" << endl;
	}
	string m_name;
	Phone m_phone;
};


int main()
{
	Person p("����", "ƻ��");
	return 0;
}