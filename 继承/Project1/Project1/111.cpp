#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//普通实现页面

//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "公共的头部信息" << endl;
//	}
//protected:
//	void ender()
//	{
//		cout << "基础语法" << endl;
//	}
//private:
//	void aaa()
//	{
//		cout << "akjsdhid" << endl;
//	}
//
//};
//
//class Cpp :private BasePage
//{
//public:
//	void cpp()
//	{
//		cout << "c++的信息" << endl;
//	}
//	void vist()
//	{
//		header();
//		ender();
//	}
//};
//
//int main()
//{
//	Cpp c;
//	//c.header();
//	c.cpp(); 
//	c.vist();
//	return 0;
//}


//class Base
//{
//public:
//	int m_a;
//	Base()
//	{
//		cout << "base的构造函数调用" << endl;
//	}
//	~Base()
//	{
//		cout << "base的析构函数调用" << endl;
//	}
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class Son:public Base
//{
//public:
//	int m_d;
//	Son()
//	{
//		cout << "son的构造函数的调用" << endl;
//	}
//	~Son()
//	{
//		cout << "son的析构函数的调用" << endl;
//	}
//};
//
//int main()
//{
//	Son s;
//	cout << sizeof(s) << endl;
//	return 0;
//}

//继承中同名成员的处理方式

//class Base
//{
//public:
//	Base()
//	{
//		m_a = 100;
//	}
//
//	int m_a;
//
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_a = 200;
//	}
//	int m_a;
//};
//
//int main()
//{
//	Son s;
//	cout << "子类的成员属性:" << s.m_a << endl;
//	cout << "父类的成员属性:" << s.Base::m_a << endl;
//	return 0;
//}


//菱形继承

class Animal
{
public:
	Animal()
	{
		m_a = 10;
	}
	int m_a;
};

//加上关键字virtual，变成虚继承；Animal类称为虚基类。
class Sheep :virtual public Animal
{
};

class Tuo :virtual public Animal
{

};

class sheepTuo :public Sheep, public Tuo
{

};

int main()
{
	sheepTuo s1;
	s1.Sheep::m_a = 18;
	s1.Tuo::m_a = 20;
	cout << sizeof(s1) << endl; 
	cout << s1.Sheep::m_a << endl;
	cout << s1.Tuo::m_a << endl;
	return 0;
}