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
		cout << "���빦�ܣ�" << endl;
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
