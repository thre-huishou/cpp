#define _CRT_SECURE_NO_WARNINGS 1
#include"zhigongguanli.h"
#include"worker.h"
#include"employee.h"
#include"Jingli.h"
#include"Boss.h"
//职工管理系统

int main()
{
	int num=1;
	guanlixitong ss;
	while (num != 0)
	{
		ss.showmeau();
		cout << "输入操作选项：" << endl;
		cin >> num;
		switch (num)
		{
		case addworker:
		{
			ss.addInfo();
			system("pause");
			system("cls");
			break;
		}
		case printworker:
		{
			//读文件
			ss.print();
			break;
		}
		case deleteworker:
		{

			//int ret = ss.isexist(1);
			//if (ret != -1)
			//{
			//	cout << "职工存在" << endl;
			//}
			//else
			//{
			//	cout << "职工不存在" << endl;
			//}
			ss.del_emp();
			break;
		}
		case reworker:
		{
			ss.mod_emp();
			break;
		}   
		case findworker:
		{
			ss.find_emp();
			break;
		} 
		case mysort:
		{
			ss.sort_emp();
			break;
		}
		case myclear:
		{
			ss.clear_emp();
			break;
		}
		case myexit:
		{
			ss.exitsystem();
			break;
		}
		default:
		{
			system("cls");
			break;
		}
		}
	}
	return 0;
}