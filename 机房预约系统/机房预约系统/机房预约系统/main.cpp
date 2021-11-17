#define _CRT_SECURE_NO_WARNINGS 1
#include"机房预约系统.h"
#include"globalFile.h"
//系统简介：学校有几个规格不同的机房，由于使用时经常出现“撞车现象”，先开发出一套机房预约系统。
/*身份简介：分别有三种身份使用该系统
1、学生代表：申请使用机房
2、教师：审核学生的申请
3、管理员：给学生、老师创建账号
*/

/*
机房简介：
机房总共有3间
1、1号机房------最大容量20人
2、2号机房------最大容量50人
3、3号机房------最大容量100人
*/

/*
申请简介：
1、申请的订单每周有管理员负责清空
2、学生可以预约未来一周内的机房使用，预约的日期为周一至周五，预约时需要选择预约时间段（上午、下午）
3、教师来审核预约，依据实际情况审核预约通过或者不通过
*/

/*
系统具体需求
1、首先进入登陆界面，可选择登陆身份有：
学生代表、老师、管理员、退出

2、每个身份都需要进行验证后，进入子菜单
学生需要输入：学号、姓名、登陆密码
老师需要输入：职工号、姓名、登陆密码
管理员需要输入：管理员姓名、登陆密码

3、学生具体功能
申请预约---预约机房
查看自身的预约---查看自身的预约状态
查看所有预约-----查看全部预约信息以及预约状态
取消预约---取消自身的预约，预约成功或审核中的预约均可取消
注销登陆----退出登陆

4、教师具体功能
查看所有预约----查看全部预约信息以及预约状态；
审核预约----对学生的预约进行审核
注销登陆----退出登陆

5、管理员具体功能
添加账号---添加学会或者老师的账号，需要检测学生编号或者教师职工号是否重复
查看账号---可以选择查看学生或者老师的全部信息
查看机房---查看所有机房的信息
清空预约---清空所有预约信息
注销登陆---退出登陆
*/


//进入教师的子菜单界面
void teachermenu(Person* &tea)
{
	while (true)
	{
		tea->operMenu();
		Teacher* man = (Teacher*)tea;//强转为子类指针，使用子类函数
		int select = 0;
		cin >> select;
		switch (select)
		{
		case tea_showallorder:
		{
			man->showAllOrder();
			break;
		}
		case tea_validorder:
		{
			man->validOrder();
			break;
		}
		case tea_exit:
		{
			cout << "注销成功！" << endl;
			delete man;
			system("pause");
			system("cls");
			return;
		}
		default:
		{
			cout << "输入格式错误" << endl;
			break;
		}
		}
	}
}


//进入学生人员子菜单界面
void studentmenu(Person* &stu)
{
	while (true)
	{
		stu->operMenu();
		Student* man = (Student*)stu;//强转为子类指针，使用子类函数
		int select = 0;
		cin >> select;
		switch (select)
		{
		case apply_order:
		{
			man->applyOrder();
			break;
		}
		case show_my_order:
		{
			man->showMyOrder();
			break;
		}
		case show_all_order:
		{
			man->showAllOrder();
			break;
		}
		case cancel_order:
		{
			man->cancelOrder();
			break;
		}
		case stu_exit:
		{
			cout << "注销成功！" << endl;
			delete man;
			system("pause");
			system("cls");
			return;
		}
		default:
		{
			cout << "输入格式错误" << endl;
			break;
		}
		}
	}
}

//进入管理人员子菜单界面
void adminmenu(Person * &admin)
{
	while (true)
	{
		//调用管理人员子菜单
		admin->operMenu();
		Admin* man = (Admin*)admin;//强转为子类指针，使用子类函数
		int select = 0;
		cin >> select;
		switch (select)
		{
		case add_person:
		{
			man->addPerson();
			break;
		}
		case show_person:
		{
			man->showPerson();
			break;
		}
		case show_computer:
		{
			man->showComputer();
			break;
		}
		case clear_order:
		{
			man->clearFile();
			break;
		}
		case admin_exit:
		{
			cout << "注销成功！" << endl;
			delete man;
			system("pause");
			system("cls");
			return;
		}
		default:
		{
			cout << "输入格式错误" << endl;
			break;
		}
		}
	}
}


//登陆功能
void LoginIn(string filename, int type)
{
	Person* person = NULL;
	ifstream ifs;
	ifs.open(filename, ios::in);

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	//准备接收用户信息
	int id = 0;
	string name;
	string pwd;

	//判断身份
	if (type == 1)
	{
		cout << "请输入你的学号：" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "请输入你的职工号：" << endl;
		cin >> id;
	}
	cout << "请输入你的名称：" << endl;
	cin >> name;
	cout << "请输入你的密码：" << endl;
	cin >> pwd;
	if (type == 1)
	{
		//学生身份验证
		int fid;
		string fname;
		string fpwd;
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			//对比
			if (fid == id && fname == name && fpwd == pwd)
			{
				cout << "验证通过！" << endl;
				person = new Student(id, name, pwd);
				system("pause");
				system("cls");
				//进入学生身份的子菜单
				studentmenu(person);
				return;
			}
		}

	}
	else if (type == 2)
	{
		//教师的身份验证
		int fid;
		string fname;
		string fpwd;
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			//对比
			if (fid == id && fname == name && fpwd == pwd)
			{
				cout << "验证通过！" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//进入教师身份的子菜单
				teachermenu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		//管理员的身份验证
		string fname;
		string fpwd;
		while ( ifs >> fname && ifs >> fpwd)
		{
			//对比
			if (fname == name && fpwd == pwd)
			{
				cout << "验证通过！" << endl;
				system("pause");
				system("cls");
				person = new Admin(name, pwd);
				//进入管理员身份的子菜单
				adminmenu(person);
				return;
			}
		}
	}
	cout << "登陆失败" << endl;
	system("pause");
	system("cls");

}



int main()
{
	Computer_room_system ss;
	int num = 1;
	while (num)
	{
		ss.main_meau();
		cout << "输入您的选择：";
		cin >> num;
		switch (num)
		{
		case student:
		{

			cout << "学生" << endl;
			LoginIn(STUDENT_FLIE, student);
			break;
		}
		case teacher:
		{
			cout << "老师" << endl;
			LoginIn(TEACHER_FLIE, teacher);
			break;
		}
		case admin:
		{
			cout << "管理员" << endl;
			LoginIn(ADMIN_FILE, admin);
			break;
		}
		case myexit:
		{
			cout << "退出系统" << endl;
			break;
		}
		default:
			cout << "输入格式不正确" << endl;
			break;
		}
	}
	
	return 0;
}