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
	//	cout << " ѡ�ֱ��:" << it->first <<" ѡ������:"<< it->second.m_name<< " ѡ��һ�ֵ÷�" 
	//		<< it->second.m_score[0]<< " ѡ�ֶ��ֵ÷֣�" << it->second.m_score[1] << endl;
	//}

	int num = 1;
	while (num)
	{
		ss.shoemeau();
		cout << "���빦�ܣ�" ;
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
			cout << "�˳��ɹ�����ӭ�´�ʹ��" << endl;
			break;
		default:
			cout << "�������" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	return 0;
}
