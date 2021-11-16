#define _CRT_SECURE_NO_WARNINGS 1
#include"speechmanager.h"
#include"speaker.h"

int main()
{
	srand((unsigned int)time(NULL));
	SpeechManager ss;

	//
	//for (map<int, Speaker>::iterator it = ss.m_speaker.begin(); it != ss.m_speaker.end(); it++)
	//{
	//	cout << " 选手编号:" << it->first <<" 选手姓名:"<< it->second.m_name<< " 选手一轮得分" 
	//		<< it->second.m_score[0]<< " 选手二轮得分：" << it->second.m_score[1] << endl;
	//}

	int num = 1;
	while (num)
	{
		ss.shoemeau();
		cout << "输入功能：" ;
		cin >> num;
		switch (num)
		{
		case start:
			ss.start_speech();
			break;
		case history:
			ss.read_history();
			break;
		case clear:
			ss.myclear();
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
