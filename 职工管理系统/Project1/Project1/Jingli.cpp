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
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名:" << this->m_name
		<< "\t职工岗位:" << this->getDeptName()
		<< "\t岗位职责:" << "完成老板给的任务" << endl;
}
string Jingli::getDeptName()
{
	return string("经理");
}