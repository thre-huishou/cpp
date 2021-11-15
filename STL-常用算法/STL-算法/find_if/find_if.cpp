#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//内置数据类型
//class myfind
//{
//public:
//	bool operator()(int val)
//	{
//		if (val > 5)
//		{ 
//			return true;
//		}
//		return false; 
//	}
//};
//
//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	find_if(v1.begin(), v1.end(), myfind());
//	return 0;
//}


//自定义数据类型
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
//};
//
//void myprint(vector<Person>&v)
//{
//	vector<Person>::iterator it = v.begin();
//	for (; it != v.end(); it++)
//	{
//		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
//	}
//}
//class GreaterFive
//{
//public:
//	bool operator()(const Person& p)
//	{
//		return p.m_age > 18;
//	}
//};
//
//int main()
//{
//
//	vector<Person> v1;
//	Person p1("张三", 18);
//	Person p2("李四", 17);
//	Person p3("王二", 19);
//	Person p4("麻子", 15);
//	Person p5("赵六", 16);
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//	myprint(v1);
//	vector<Person>::iterator it=find_if(v1.begin(), v1.end(), GreaterFive());
//	if (it == v1.end())
//	{
//		cout << "不存在" << endl;
//	}
//	else
//	{
//		cout << "存在:" << endl;
//		cout << "姓名：" << it->m_name << "年龄：" << it->m_age << endl;
//	}
//
//	return 0;
//}