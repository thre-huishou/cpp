#define _CRT_SECURE_NO_WARNINGS 1
//友元学习
#include<iostream>
#include<string>
using namespace std;

class Building;
class Goodgay
{
public:
	void visit(Building &b);//参观函数访问Building的属性

	/*Goodgay()
	{
		m_p = new Building;
	}*/
	Building *m_p;
};
class Building
{
	//friend class Goodgay;//类作为友元
	void visit(Building &b);
	friend void goodgay(Building & p);//goodgay是友元可以访问Building的私有属性
public:
	string m_sittingRoom; 

	Building();

private:
	string m_bedroom;
};
//全局函数做友元
void goodgay(Building & p)
{
	cout << "好基友的全局函数正在访问" << endl;
	cout << p.m_sittingRoom << endl;
	cout << p.m_bedroom << endl;
}

//类做友元
//class Goodgay
//{
//public:
//	void visit(Building &b);//参观函数访问Building的属性
//
//	/*Goodgay()
//	{
//		m_p = new Building;
//	}*/
//	Building *m_p;
//};

//类外写成员函数：类内需要函数说明，类外写具体实现
Building::Building()
{
	m_sittingRoom = "1客厅";
	m_bedroom = "1卧室";
}

void Goodgay::visit(Building &b)
{
	m_p = &b;
	cout << "好基友类正在访问：" << m_p->m_sittingRoom << endl;
	cout << "好基友类正在访问：" << m_p->m_bedroom << endl;
}

int main()
{
	Building b1;
	//cout << b1.m_sittingRoom << endl;
	//goodgay(b1);
	Goodgay p1;
	//p1.visit(b1);
	return 0;
}