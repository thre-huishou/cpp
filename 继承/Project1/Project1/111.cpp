#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//��ͨʵ��ҳ��

//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "������ͷ����Ϣ" << endl;
//	}
//protected:
//	void ender()
//	{
//		cout << "�����﷨" << endl;
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
//		cout << "c++����Ϣ" << endl;
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
//		cout << "base�Ĺ��캯������" << endl;
//	}
//	~Base()
//	{
//		cout << "base��������������" << endl;
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
//		cout << "son�Ĺ��캯���ĵ���" << endl;
//	}
//	~Son()
//	{
//		cout << "son�����������ĵ���" << endl;
//	}
//};
//
//int main()
//{
//	Son s;
//	cout << sizeof(s) << endl;
//	return 0;
//}

//�̳���ͬ����Ա�Ĵ���ʽ

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
//	cout << "����ĳ�Ա����:" << s.m_a << endl;
//	cout << "����ĳ�Ա����:" << s.Base::m_a << endl;
//	return 0;
//}


//���μ̳�

class Animal
{
public:
	Animal()
	{
		m_a = 10;
	}
	int m_a;
};

//���Ϲؼ���virtual�������̳У�Animal���Ϊ����ࡣ
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