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
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名:" << this->m_name
		<< "\t职工岗位:" << this->getDeptName()
		<< "\t岗位职责:" << "完成经理给的任务" << endl;
}

string Employee::getDeptName()
{
	return string("员工");
}