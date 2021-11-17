#define _CRT_SECURE_NO_WARNINGS 1
#include"teacher.h"

//Ĭ�Ϲ���
Teacher::Teacher()
{

}
//��������
Teacher::Teacher( int id,string name, string password)
{
	m_id = id;
	m_name = name;
	m_pass_word = password;

}
//��������
Teacher::~Teacher()
{

}
//�˵�����
void Teacher::operMenu()
{
	cout << "��ӭ��ʦ��" << this->m_name << "��½��" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |         1.�鿴����ԤԼ          |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           2.���ԤԼ            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           0.ע����½            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "��ѡ�����Ĳ�����" << endl;
}

//�鿴����ԤԼ
void Teacher::showAllOrder()
{
	Order o;
	if (o.m_size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < o.m_size; i++)
	{
		cout << "ԤԼѧ��ѧ�ţ�" << o.m_orderData[i]["ԤԼѧ��ѧ��"] << " ;"
			<< "ԤԼѧ��������" << o.m_orderData[i]["ԤԼѧ������"] << " ;"
			<< "ԤԼ���ڣ���" << o.m_orderData[i]["ԤԼ����"] << " ;"
			<< "ԤԼʱ�䣺" << ((o.m_orderData[i]["ԤԼʱ��"] == "1") ? "����" : "����") << " ;"
			<< "ԤԼ������" << o.m_orderData[i]["ԤԼ����"] << " ;";
		string status = "״̬��";
		if (o.m_orderData[i]["ԤԼ״̬"] == "1")
		{
			status += "������";
		}
		else if (o.m_orderData[i]["ԤԼ״̬"] == "2")
		{
			status += "������";
		}
		else if (o.m_orderData[i]["ԤԼ״̬"] == "-1")
		{
			status += "ԤԼʧ��";
		}
		else
		{
			status += "��ȡ��";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}

//���ԤԼ
void Teacher::validOrder()
{
	Order o;
	if (o.m_size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "����˵�ԤԼ��¼���£�" << endl;
	vector<int> v;
	int index = 1;
	for (int i = 0; i < o.m_size; i++)
	{
		if (o.m_orderData[i]["ԤԼ״̬"] == "1")
		{
			v.push_back(i);
			cout << index++ << ":";
			cout << "ԤԼѧ��ѧ�ţ�" << o.m_orderData[i]["ԤԼѧ��ѧ��"] << " "
				<< "ԤԼѧ��������" << o.m_orderData[i]["ԤԼѧ������"] << " "
				<< "ԤԼ������" << o.m_orderData[i]["ԤԼ����"] << " "
				<< "ԤԼ���ڣ�" << o.m_orderData[i]["ԤԼ����"] << " "
				<< "ԤԼʱ�䣺" << o.m_orderData[i]["ԤԼʱ��"] << " "
				<< "״̬�������" << endl;
		}
	}
	cout << "������Ҫ��˵�ԤԼ��¼��" << endl;
	int select = 0;
	int ret = 0;
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				cout << "��������˽��" << endl;
				cout << "1��ͨ��" << endl;
				cout << "2����ͨ��" << endl;
				cin >> ret;
				if (ret == 1)
				{
					o.m_orderData[v[select - 1]]["ԤԼ״̬"] = "2";
				}
				else
				{
					o.m_orderData[v[select - 1]]["ԤԼ״̬"] = "-1";
				}
				o.updateorder();
				cout << "������" << endl;
				break;
			}
		}
		else
		{
			cout << "����������������롣" << endl;
		}
	}
	system("pause");
	system("cls");
}