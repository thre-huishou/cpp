#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

class Phone
{
public:
	Phone(string name) :p_name(name)
	{
		cout << "phone构造函数的调用" << endl;
	}
	~Phone()
	{
		cout << "phone析构函数的调用" << endl;
	}
	string p_name;
};

class Person
{
public:
	Person (string name, string p_name) :m_name(name), m_phone(p_name)
	{
		cout << "person构造函数的调用" << endl;
	}
	~Person()
	{
		cout << "person析构函数的调用" << endl;
	}
	string m_name;
	Phone m_phone;
};


int main()
{
	Person p("张三", "苹果");
	return 0;
}