#define _CRT_SECURE_NO_WARNINGS 1
#include"gongneng.h"

void meau()
{
	cout << "************************************************" << endl;
	cout << "*********************ͨѶ¼*********************" << endl;
	cout << "************************************************" << endl;
	cout << "***********1-���  2-��ʾ  3-ɾ��***************" << endl;
	cout << "***********4-����  5-�޸�  6-���***************" << endl;
	cout << "*****************  0-�˳�  *********************" << endl;
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
		cout << "��������Ҫִ�еĹ��ܣ�" << endl;
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
			cout << "������ɾ����Ա������" << endl;
			cin >> dname;
			ddele(&s,dname);
			break;
		case myfind:
			cout << "�������ѯ��Ա������" << endl;
			cin >> dname;
			myfindh(&s, dname);
			break;
		case revise:
			cout << "������Ԥ�޸���Ϣ��Ա������" << endl;
			cin >> dname;
			xiugai(&s, dname);
			break;
		case clc:
			qingkong(&s);
			break;
		case myexit:
			cout << "�˳��ɹ�!!" << endl;
			return;
		default:
			cout << "�����ʽ�������������룺" << endl;
		}
	}
}
int main()
{
	test();
	system("pause");
	return 0;
}