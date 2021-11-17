#define _CRT_SECURE_NO_WARNINGS 1
#include"admin.h"

//默认构造
Admin::Admin()
{

}
//参数构造
Admin::Admin(string name, string password)
{
	m_name = name;
	m_pass_word = password;
	this->initvector();

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
Admin::~Admin()
{

}
//菜单函数
void Admin::operMenu()
{
	cout << "欢迎管理员：" << this->m_name << "登陆！" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           1.添加账号            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           2.查看账号            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           3.查看机房            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           4.清空预约            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           0.注销登陆            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "请选择您的操作：" << endl;
}

//去重函数
bool Admin::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		for (vector<Teacher>::iterator it = vtea.begin(); it != vtea.end(); it++)
		{
			if (it->m_id == id)
			{
				return true;
			}
		}
		return false;
	}
	else
	{
		for (vector<Student>::iterator it = vstu.begin(); it != vstu.end(); it++)
		{
			if (it->m_id == id)
			{
				return true;
			}
		}
		return false;
	}
}

//添加账号
void Admin::addPerson()
{
	cout << "请输入添加账号种类：" << endl;
	cout << "1.教师账号." << endl;
	cout << "2.学生账号." << endl;

	string filename;
	string tip;
	ofstream ofs;

	int num = 0;
	cin >> num;
	if (num == 1)
	{
		filename = TEACHER_FLIE;
		tip = "请输入职工号：";
	}
	else
	{
		filename = STUDENT_FLIE;
		tip = "请输入学号：";
	}
	ofs.open(filename, ios::out | ios::app);
	int id;
	string name;
	string pwd;
	while (true)
	{
		cout << tip << endl;
		cin >> id;
		if (!this->checkRepeat(id, num))
		{
			break;
		}
		cout << "学号/职工号重复，请重新输入：" << endl;
	}
	cout << "请输入姓名:" << endl;
	cin >> name;
	cout << "请输入密码：" << endl;
	cin >> pwd;
	ofs << id << " " << name << " " << pwd << " " << endl;
	ofs.close();
	if (num == 1)
	{
		Teacher t(id, name, pwd);
		vtea.push_back(t);
	}
	else
	{
		Student s(id, name, pwd);
		vstu.push_back(s);
	}
	//this->initvector();
	cout << "账号创建成功！" << endl;

	system("pause");
	system("cls");
}

//查看账号
void Admin::showPerson()
{
	cout << "教师账号：" << endl;
	for (vector<Teacher>::iterator it = vtea.begin(); it!=vtea.end(); it++)
	{
		cout << "职工号：" << it->m_id << " 姓名：" << it->m_name << " 密码：" << it->m_pass_word << endl;
	}
	cout << "------------------------------" << endl;
	cout << "学生账号：" << endl;
	for (vector<Student>::iterator it = vstu.begin(); it != vstu.end(); it++)
	{
		cout << "学号：" << it->m_id << " 姓名：" << it->m_name << " 密码：" << it->m_pass_word << endl;
	}
	system("pause");
	system("cls");
}

//查看机房信息
void Admin::showComputer()
{
	for (vector<computerroom>::iterator it = this->v_com.begin(); it != v_com.end(); it++)
	{
		cout << "第" << it->m_id << "号机房，最高可容纳" << it->m_capacity << "人" << endl;
	}
	system("pause");
	system("cls");
}

//清空预约记录
void Admin::clearFile()
{
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::trunc);
	cout << "成功清除记录" << endl;
	ofs.close();
	system("pause");
	system("cls");
}

//初始化容器
void Admin::initvector()
{
	//读取学生文件中的信息
	ifstream ifs;
	ifs.open(STUDENT_FLIE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		ifs.close();
		return;
	}
	vstu.clear();
	vtea.clear();

	Student s;
	while (ifs >> s.m_id&&ifs >> s.m_name&&ifs >> s.m_pass_word)
	{
		vstu.push_back(s);
	}
	cout << "当前学生数量为：" << vstu.size() << endl;
	ifs.close();

	//读取教师文件中的信息
	ifs.open(TEACHER_FLIE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		ifs.close();
		return;
	}

	Teacher t;
	while (ifs >> t.m_id&&ifs >> t.m_name&&ifs >> t.m_pass_word)
	{
		vtea.push_back(t);
	}
	cout << "当前教师数量为：" << vtea.size() << endl;
	ifs.close();
}
