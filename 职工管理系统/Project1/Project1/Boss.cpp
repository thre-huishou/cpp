#define _CRT_SECURE_NO_WARNINGS 1
#include"Boss.h"

Boss::Boss(int id, string name, int dpt_id)
{
	m_id = id;
	m_name = name;
	m_dpt_id = dpt_id;
}
void Boss::showInfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ������:" << this->m_name
		<< "\tְ����λ:" << this->getDeptName()
		<< "\t��λְ��:" << "��֤��˾����������" << endl;
}
string Boss::getDeptName()
{
	return string("�ϰ�");
}