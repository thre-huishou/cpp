#define _CRT_SECURE_NO_WARNINGS 1
#include"employee.h"

Employee::Employee(int id, string name, int dpt_id)
{
	this->m_id = id;
	this->m_name = name;
	this->m_dpt_id = dpt_id;
}
void Employee::showInfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ������:" << this->m_name
		<< "\tְ����λ:" << this->getDeptName()
		<< "\t��λְ��:" << "��ɾ����������" << endl;
}

string Employee::getDeptName()
{
	return string("Ա��");
}