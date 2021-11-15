#define _CRT_SECURE_NO_WARNINGS 1
#include"speechmanager.h"
#include"speaker.h"

int main()
{
	SpeechManager ss;
	int num = 1;
	while (num)
	{
		ss.shoemeau();
		cout << "输入功能：" << endl;
		cin >> num;
		switch (num)
		{
		case start:
			break;
		case history:
			break;
		case clear:
			break;
		case myexit: 
			cout << "退出成功，欢迎下次使用" << endl;
			break;
		default:
			cout << "命令错误" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	return 0;
}
