#define _CRT_SECURE_NO_WARNINGS 1
#include"机房预约系统.h"


//构造函数
Computer_room_system::Computer_room_system()
{

}

//析构函数
Computer_room_system::~Computer_room_system()
{

}

//菜单界面
void Computer_room_system::main_meau()
{
	cout << "====================欢迎来到443-215机房预约系统====================" << endl;
	cout << endl;
	cout << "请输入您的身份" << endl;
	cout << "                 ---------------------------------"<<endl;
	cout << "                |                                 |"<< endl;
	cout << "                |           1.学生代表            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           2.老    师            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           3.管 理 员            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           0.退    出            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                 ---------------------------------" << endl;
}