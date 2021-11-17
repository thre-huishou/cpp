#define _CRT_SECURE_NO_WARNINGS 1
#include"student.h"


////初始化预约
//void Student::initorder()
//{
//	ifstream ifs;
//	ifs.open(ORDER_FILE, ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		ifs.close();
//		return;
//	}
//
//	Order o;
//	while (ifs >> o.m_id&&ifs >> o.m_name&&ifs >> o.m_room&&ifs >> o.m_data&&ifs >> o.m_time&&ifs>>o.m_status)
//	{
//		v_order.push_back(o);
//	}
//	ifs.close();
//}
//默认构造
Student::Student()
{

}
//参数构造
Student::Student( int id,string name, string password)
{
	m_id = id;
	m_name = name;
	m_pass_word = password;

	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		ifs.close();
		return;
	}
	computerroom rr;
	while (ifs >> rr.m_id&&ifs >> rr.m_capacity)
	{
		v_com.push_back(rr);
	}
	ifs.close();

}
//析构函数
Student::~Student()
{

}
//菜单函数
void Student::operMenu()
{
	cout << "欢迎学生：" << this->m_name << "登陆！" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           1.申请预约            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |         2.查看当前预约          |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |         3.查看所有预约          |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           4.取消预约            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           0.注销登陆            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "请选择您的操作：" << endl;
}

//申请预约
void Student::applyOrder()
{
	int data=0;
	int time=0;
	int room = 0;
	cout << "机房开放的时间为周一-周五：早上8:00-晚上10:00" << endl;
	cout << "请输入申请预约的时间：" << endl;
	cout << "1.周一" << endl;
	cout << "2.周二" << endl;
	cout << "3.周三" << endl;
	cout << "4.周四" << endl;
	cout << "5.周五" << endl;
	while (true)
	{
		cin >> data;
		if (data >= 1 && data <= 5)
		{
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}
	cout << "请输入预约的时间段：" << endl;
	cout << "1.上午" << endl;
	cout << "2.下午" << endl;
	while (true)
	{
		cin >> time;
		if (time >= 1 && time <= 2)
		{
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}
	cout << "请输入预约的机房号：" << endl;
	for (vector<computerroom>::iterator it = v_com.begin(); it != v_com.end(); it++)
	{
		cout << it->m_id << "号机房，最大容纳人数：" << it->m_capacity << endl;
	}
	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}
	//判断有误时间冲突
	ofstream ofs;
	int statue = 1;
	ofs.open(ORDER_FILE, ios::out | ios::app);
	if (!ofs.is_open())
	{
		cout << "文件打开失败" << endl;
		ofs.close();
		return;
	}
	ofs << "预约学生学号:" << this->m_id << " "
		<< "预约学生姓名:" << this->m_name << " "
		<< "预约机房:" << room << " "
		<< "预约日期:" << data << " "
		<< "预约时间:" << time << " "
		<< "预约状态:" << statue << endl;

	cout << "预约成功" << endl;
	system("pause");
	system("cls");

}

//查看当前预约
void Student::showMyOrder()
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
		if (this->m_id == atoi(o.m_orderData[i]["预约学生学号"].c_str()))//找到自身的预约
		{
			cout << "预约日期：周" << o.m_orderData[i]["预约日期"] << " ;"
				<< "预约时间：" << ((o.m_orderData[i]["预约时间"] == "1") ? "上午" : "下午") << " ;"
				<< "预约机房：" << o.m_orderData[i]["预约机房"]<<" ;" ;
			string status = "状态：";
			if (o.m_orderData[i]["预约状态"] == "1")
			{
				status += "申请中";
			}
			else if (o.m_orderData[i]["预约状态"] == "2")
			{
				status += "已审批";
			}
			else if(o.m_orderData[i]["预约状态"] == "-1")
			{
				status += "预约失败";
			}
			else
			{
				status += "已取消";
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");

}

//查看所有预约
void Student::showAllOrder()
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
			cout << "预约学生学号："<< o.m_orderData[i]["预约学生学号"]<<" ;"
				<<"预约学生姓名："<< o.m_orderData[i]["预约学生姓名"] << " ;"
				<<"预约日期：周" << o.m_orderData[i]["预约日期"] << " ;"
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

//取消预约
void Student::cancelOrder()
{
	//cout << "当前预约信息：" << endl;
	//this->showMyOrder();
	//string data;
	//string time;
	//string room;
	//cout << "输入取消预约的日期：" << endl;
	//cout << "1.周一" << endl;
	//cout << "2.周二" << endl;
	//cout << "3.周三" << endl;
	//cout << "4.周四" << endl;
	//cout << "5.周五" << endl;

	Order oo;
	if (oo.m_size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}
	vector<int> v;
	cout << "审核中或预约成功的记录可以取消，请输入取消的记录" << endl;
	int index = 1;
	for (int i = 0; i < oo.m_size; i++)
	{
		if (this->m_id == atoi(oo.m_orderData[i]["预约学生学号"].c_str()))
		{
			if (oo.m_orderData[i]["预约状态"] == "1" || oo.m_orderData[i]["预约状态"] == "2")
			{
				v.push_back(i);
				cout << index++ << "、";
				cout << " 预约日期：周" << oo.m_orderData[i]["预约日期"];
				cout << " 预约时期：" << (oo.m_orderData[i]["预约时间"] == "1" ? "上午" : "下午");
				cout << " 预约机房：" << oo.m_orderData[i]["预约机房"];
				string status = " 状态：";
				if (oo.m_orderData[i]["预约状态"] == "1")
				{
					status += "审核中";
				}
				else
				{
					status += "已审核";
				}
				cout << status << endl;
			}
		}
	}
	cout << "请输入取消的记录，0代表返回" << endl;
	int select = 0;
	
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
				oo.m_orderData[v[select - 1]]["预约状态"] = "0";
				oo.updateorder();
				cout << "取消成功" << endl;
				system("pause");
				system("cls");
				return;
			}
		}
		else
		{
			cout << "输入有误" << endl;
		}
	}
}