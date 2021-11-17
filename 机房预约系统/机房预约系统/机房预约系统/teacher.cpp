#define _CRT_SECURE_NO_WARNINGS 1
#include"teacher.h"

//默认构造
Teacher::Teacher()
{

}
//参数构造
Teacher::Teacher( int id,string name, string password)
{
	m_id = id;
	m_name = name;
	m_pass_word = password;

}
//析构函数
Teacher::~Teacher()
{

}
//菜单函数
void Teacher::operMenu()
{
	cout << "欢迎教师：" << this->m_name << "登陆！" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |         1.查看所有预约          |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           2.审核预约            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           0.注销登陆            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "请选择您的操作：" << endl;
}

//查看所有预约
void Teacher::showAllOrder()
{
	Order o;
	if (o.m_size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < o.m_size; i++)
	{
		cout << "预约学生学号：" << o.m_orderData[i]["预约学生学号"] << " ;"
			<< "预约学生姓名：" << o.m_orderData[i]["预约学生姓名"] << " ;"
			<< "预约日期：周" << o.m_orderData[i]["预约日期"] << " ;"
			<< "预约时间：" << ((o.m_orderData[i]["预约时间"] == "1") ? "上午" : "下午") << " ;"
			<< "预约机房：" << o.m_orderData[i]["预约机房"] << " ;";
		string status = "状态：";
		if (o.m_orderData[i]["预约状态"] == "1")
		{
			status += "申请中";
		}
		else if (o.m_orderData[i]["预约状态"] == "2")
		{
			status += "已审批";
		}
		else if (o.m_orderData[i]["预约状态"] == "-1")
		{
			status += "预约失败";
		}
		else
		{
			status += "已取消";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}

//审核预约
void Teacher::validOrder()
{
	Order o;
	if (o.m_size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "待审核的预约记录如下：" << endl;
	vector<int> v;
	int index = 1;
	for (int i = 0; i < o.m_size; i++)
	{
		if (o.m_orderData[i]["预约状态"] == "1")
		{
			v.push_back(i);
			cout << index++ << ":";
			cout << "预约学生学号：" << o.m_orderData[i]["预约学生学号"] << " "
				<< "预约学生姓名：" << o.m_orderData[i]["预约学生姓名"] << " "
				<< "预约机房：" << o.m_orderData[i]["预约机房"] << " "
				<< "预约日期：" << o.m_orderData[i]["预约日期"] << " "
				<< "预约时间：" << o.m_orderData[i]["预约时间"] << " "
				<< "状态：审核中" << endl;
		}
	}
	cout << "输入需要审核的预约记录！" << endl;
	int select = 0;
	int ret = 0;
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				cout << "请输入审核结果" << endl;
				cout << "1、通过" << endl;
				cout << "2、不通过" << endl;
				cin >> ret;
				if (ret == 1)
				{
					o.m_orderData[v[select - 1]]["预约状态"] = "2";
				}
				else
				{
					o.m_orderData[v[select - 1]]["预约状态"] = "-1";
				}
				o.updateorder();
				cout << "审核完毕" << endl;
				break;
			}
		}
		else
		{
			cout << "输入错误，请重新输入。" << endl;
		}
	}
	system("pause");
	system("cls");
}