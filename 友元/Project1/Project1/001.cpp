#define _CRT_SECURE_NO_WARNINGS 1
//��Ԫѧϰ
#include<iostream>
#include<string>
using namespace std;

class Building;
class Goodgay
{
public:
	void visit(Building &b);//�ιۺ�������Building������

	/*Goodgay()
	{
		m_p = new Building;
	}*/
	Building *m_p;
};
class Building
{
	//friend class Goodgay;//����Ϊ��Ԫ
	void visit(Building &b);
	friend void goodgay(Building & p);//goodgay����Ԫ���Է���Building��˽������
public:
	string m_sittingRoom; 

	Building();

private:
	string m_bedroom;
};
//ȫ�ֺ�������Ԫ
void goodgay(Building & p)
{
	cout << "�û��ѵ�ȫ�ֺ������ڷ���" << endl;
	cout << p.m_sittingRoom << endl;
	cout << p.m_bedroom << endl;
}

//������Ԫ
//class Goodgay
//{
//public:
//	void visit(Building &b);//�ιۺ�������Building������
//
//	/*Goodgay()
//	{
//		m_p = new Building;
//	}*/
//	Building *m_p;
//};

//����д��Ա������������Ҫ����˵��������д����ʵ��
Building::Building()
{
	m_sittingRoom = "1����";
	m_bedroom = "1����";
}

void Goodgay::visit(Building &b)
{
	m_p = &b;
	cout << "�û��������ڷ��ʣ�" << m_p->m_sittingRoom << endl;
	cout << "�û��������ڷ��ʣ�" << m_p->m_bedroom << endl;
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