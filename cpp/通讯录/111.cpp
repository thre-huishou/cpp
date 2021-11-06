#define _CRT_SECURE_NO_WARNINGS 1
#include"gongneng.h"

void meau()
{
	cout << "************************************************" << endl;
	cout << "*********************通讯录*********************" << endl;
	cout << "************************************************" << endl;
	cout << "***********1-添加  2-显示  3-删除***************" << endl;
	cout << "***********4-查找  5-修改  6-清空***************" << endl;
	cout << "*****************  0-退出  *********************" << endl;
}

void test()
{
	int num = 1;
	string dname;
	meau();
	struct TXL s;
	init_txl(&s);
	while (num)
	{
		cout << "请输入想要执行的功能：" << endl;
		cin >> num;
		switch (num)
		{
		case add:
			addpeople(&s);
			break;
		case print:
			printpeo(&s);
			break;
		case dele:
			cout << "请输入删除人员姓名：" << endl;
			cin >> dname;
			ddele(&s,dname);
			break;
		case myfind:
			cout << "请输入查询人员姓名：" << endl;
			cin >> dname;
			myfindh(&s, dname);
			break;
		case revise:
			cout << "请输入预修改信息人员姓名：" << endl;
			cin >> dname;
			xiugai(&s, dname);
			break;
		case clc:
			qingkong(&s);
			break;
		case myexit:
			cout << "退出成功!!" << endl;
			return;
		default:
			cout << "输入格式错误，请重新输入：" << endl;
		}
	}
}
int main()
{
	test();
	system("pause");
	return 0;
}