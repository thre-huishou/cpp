#define _CRT_SECURE_NO_WARNINGS 1
#include"Jingli.h"

Jingli::Jingli(int id, string name, int dpt_id)
{
	m_id = id;
	m_name = name;
	m_dpt_id = dpt_id;
}
void Jingli::showInfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ������:" << this->m_name
		<< "\tְ����λ:" << this->getDeptName()
		<< "\t��λְ��:" << "����ϰ��������" << endl;
}
string Jingli::getDeptName()
{
	return string("����");
}