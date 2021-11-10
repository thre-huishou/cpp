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
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名:" << this->m_name
		<< "\t职工岗位:" << this->getDeptName()
		<< "\t岗位职责:" << "保证公司的正常运行" << endl;
}
string Boss::getDeptName()
{
	return string("老板");
}